#include <stack>
#include <queue> 
#include <iostream>
#include "show.h"

// 절대값 크기로 우선순위를 정하고 싶다.
// 방법 1. 절대값으로 비교하는 함수 객체를 만드세요

// => 도전 과제 : 아래 abs_less 를 템플릿으로 발전시켜 보세요
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



