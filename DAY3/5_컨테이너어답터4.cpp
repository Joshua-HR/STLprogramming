#include <stack>
#include <queue> // queue, priority_queue
#include <iostream>
#include "show.h"

int main()
{
	// 우선순위큐 : 요소를 꺼낼때 우선순위가 가장 높은
	//			요소가 나오게 된다.
	std::priority_queue<int> pq;

	pq.push(10);
	pq.push(-10);
	pq.push(-20);
	pq.push(20);
	pq.push(15);

	// 핵심 : pq.top() 을 하면 우선순위가 가장 높은 요소가 나옵니다.
	// => 기본연산은 < 사용 "가장 큰값" 나옵니다.
	std::cout << pq.top() << std::endl;  // 20
	pq.pop();			
	std::cout << pq.top() << std::endl;	 // 15

}



