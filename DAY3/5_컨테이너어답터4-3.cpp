// 5_�����̳ʾ����4-3 
#include <stack>
#include <queue> 
#include <iostream>
#include "show.h"

int main()
{
//	std::priority_queue<int> pq;	// �� �ڵ�� �ᱹ �Ʒ� �ڵ��Դϴ�.
//	std::priority_queue<int, std::vector<int>, std::less<int>> pq;

	// �켱������ ���ϴ� ����� �����ϴ� �ڵ�. < �� �ƴ� > ���
	std::priority_queue<int, std::vector<int>, std::greater<int>> pq;

	pq.push(10);
	pq.push(-10);
	pq.push(-20);
	pq.push(20);
	pq.push(15);

	std::cout << pq.top() << std::endl;  // -20
	pq.pop();
	std::cout << pq.top() << std::endl;	 // -10

}



