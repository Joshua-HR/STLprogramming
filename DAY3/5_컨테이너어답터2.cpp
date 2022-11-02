// Container Adapter
// => 3개의 sequence container 의 함수이름을 변경해서 만들것
// 
// 3개의 컨테이너 어답터가 있습니다.
#include <stack>	// stack
#include <queue>	// queue, priority_queue
#include "show.h"

int main()
{
	std::stack<int> s1;
	s1.push(10);
	s1.push(20);

	std::cout << s1.top() << std::endl; // 20. 반환만, 제거 안됨
	std::cout << s1.top() << std::endl; // 20

	s1.pop(); // 제거만 

	std::cout << s1.top() << std::endl; // 10
	//=======================================================
	
	std::queue<int> q; // First In First Out
	q.push(10);
	q.push(20);

	std::cout << q.front() << std::endl; // 10
	
	q.pop();

	std::cout << q.front() << std::endl; // 20

}