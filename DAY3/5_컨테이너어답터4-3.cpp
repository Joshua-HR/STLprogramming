// 5_컨테이너어답터4-3 
#include <stack>
#include <queue> 
#include <iostream>
#include "show.h"

int main()
{
//	std::priority_queue<int> pq;	// 이 코드는 결국 아래 코드입니다.
//	std::priority_queue<int, std::vector<int>, std::less<int>> pq;

	// 우선순위를 비교하는 방법을 변경하는 코드. < 가 아닌 > 사용
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



