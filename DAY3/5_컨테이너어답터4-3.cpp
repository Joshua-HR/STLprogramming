// 5_컨테이너어답터4-3 
#include <stack>
#include <queue> 
#include <iostream>
#include "show.h"

int main()
{
	std::priority_queue<int> pq;

	pq.push(10);
	pq.push(-10);
	pq.push(-20);
	pq.push(20);
	pq.push(15);

	std::cout << pq.top() << std::endl;  // 20
	pq.pop();
	std::cout << pq.top() << std::endl;	 // 15

}



