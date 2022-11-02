#include <stack>
#include <queue> // queue, priority_queue
#include <list>
#include <vector>
#include <deque>
#include "show.h"

int main()
{
	// stack : 한쪽 방향만 열려 있으면 됩니다.
	// queue : 양쪽 방향이 열려 있어야 합니다.
	// 
	// vector : 앞쪽이 막혀 있습니다.
	// 
	// 다음중 잘못된 코드를 모두 골라 보세요
	std::stack<int, std::list<int>>   s1;
	std::stack<int, std::vector<int>> s2;
	std::stack<int, std::deque<int>>  s3;

	std::queue<int, std::list<int>>   q1;
	std::queue<int, std::vector<int>> q2;	// 잘못된 코드!
											// queue 를 만들때는
											// vector 를 사용하면 안됩니다.
	std::queue<int, std::deque<int>>  q3;

	// 그런데 q2 에서 왜?? 에러가 나지 않나요 ?
	// => q2.pop()을 하는 코드에서 에러 발생

	q2.push(10);  // ok.. 넣을때는 뒤쪽으로.. vector 는 push_back 이 있다

	q2.pop(); // error. pop_front() 가 없다.
}



