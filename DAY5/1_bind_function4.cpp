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
							
	f = std::bind(&foo, _1, std::ref(n));// n ��ü�� ���ڷ� �����Ѵ�

	f(0);	//	 foo(0, n)


	std::cout << n << std::endl; // ��� ������ ������
}


