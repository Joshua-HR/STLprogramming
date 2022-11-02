#include <stack>
#include <queue> 
#include <iostream>
#include "show.h"


int main()
{
	// ���� ǥ���� : �Լ���ü�� ����� ǥ���

	// ��� 1. ����ǥ������ ���� ��� 
	// => ���� �Դϴ�.
	// => ���� ǥ������ ���� ����� "Ÿ��" �� �ƴ� �ӽ�"��ü" �Դϴ�.
//	std::priority_queue<int, std::vector<int>, 
//					[](int a, int b) { return abs(a) < abs(b); } > pq;
					// class xxx{}; xxx();
	
	// ��� 2. C++11 decltype Ű���� ���
	// => ����
	// => ���� ǥ���� ��ü�� "�򰡵��� ���� ǥ����"�� ������ ����.
	// => decltype() �� �򰡵��� ���� ǥ���� �Դϴ�.
	// int n;
	// decltype(n) : int
//	std::priority_queue<int, std::vector<int>, 
//				decltype([](int a, int b) { return abs(a) < abs(b); }) > pq;



	// ��� 3. ����ǥ������ auto ������ ���
	// => ����!
	// => decltype(cmp) ��ü�� ������ �����ϴ�.
	// => ���� : ����ǥ������ ����� Ÿ���� ����Ʈ �����ڰ� �����ϴ�.
	// => priority_queue ���ο��� ��� ����Ÿ ���鶧 ����Ʈ ������ �䱸!

//	auto cmp = [](int a, int b) { return abs(a) < abs(b); };

//	std::priority_queue<int, std::vector<int>,	decltype(cmp) > pq;


	// ��� 4. ���ø� ���ڷ� Ÿ���� �����ϰ�, �����ڷ� ��ü�� ����..!!
	// ����Ʈ �����ڰ� �ƴ� ���� �����ڸ� ����ϵ���!!!
	auto cmp = [](int a, int b) { return abs(a) < abs(b); };
	std::priority_queue<int, std::vector<int>, decltype(cmp) > pq(cmp);

	pq.push(10);
	pq.push(-30);
	pq.push(20);

	std::cout << pq.top() << std::endl;  
}



