#include <iostream>
#include <functional>
using namespace std::placeholders;

void foo(int a, int& b) { b = 100; }

int main()
{	
	std::function<void(int)> f;
	
	int n = 0;

	// -------------------------------------------
//	f = std::bind(&foo, _1, n);  // �� ������ ���� �� ���ô�.
									// => n�� ���� �� 0 ���� ���ڸ� �����Ѵ�.
									//
	
//  f(0);	// foo(0, 0)							

	f = std::bind(&foo, _1, std::ref(n));// n ��ü�� ���ڷ� �����Ѵ�

	f(0);	// foo(0, n)

	std::cout << n << std::endl; // ��� ������ ������


	// �ٽ� 
	// bind �� �⺻������ "��"�� �����ϴ� ��� �Դϴ�.
	// ������ �ϰ� ������ std::ref() ����ϼ���
	// 
	// f = std::bind(&foo, _1, n);  // n �� ������ 2��° ���� ����
	// f = std::bind(&foo, _1, std::ref(n)); // n �� 2��° ���ڷ� ����
}


