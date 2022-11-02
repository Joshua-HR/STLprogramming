#include <stack>
#include <queue> 
#include <iostream>
#include "show.h"

// ���밪 ũ��� �켱������ ���ϰ� �ʹ�.
// ��� 1. ���밪���� ���ϴ� �Լ� ��ü�� ���弼��

// => ���� ���� : �Ʒ� abs_less �� ���ø����� �������� ������
struct abs_less
{
	bool operator()(int a, int b) const
	{
		return abs(a) < abs(b);
	}
};

int main()
{
	std::priority_queue<int, std::vector<int>, abs_less > pq;

	pq.push(10);
	pq.push(-30);
	pq.push(20);

	std::cout << pq.top() << std::endl;  // -30
}



