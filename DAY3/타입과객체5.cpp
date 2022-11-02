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
	std::priority_queue<int, std::vector<int>, 
					[](int a, int b) { return abs(a) < abs(b); } > pq;



	pq.push(10);
	pq.push(-30);
	pq.push(20);

	std::cout << pq.top() << std::endl;  
}



