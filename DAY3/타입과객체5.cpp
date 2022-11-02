#include <stack>
#include <queue> 
#include <iostream>
#include "show.h"


int main()
{
	// 람다 표현식 : 함수객체를 만드는 표기법

	// 방법 1. 람다표현식을 직접 사용 
	// => 에러 입니다.
	// => 람다 표현식의 최종 결과는 "타입" 이 아닌 임시"객체" 입니다.
//	std::priority_queue<int, std::vector<int>, 
//					[](int a, int b) { return abs(a) < abs(b); } > pq;
					// class xxx{}; xxx();
	
	// 방법 2. C++11 decltype 키워드 사용
	std::priority_queue<int, std::vector<int>, 
					[](int a, int b) { return abs(a) < abs(b); } > pq;



	pq.push(10);
	pq.push(-30);
	pq.push(20);

	std::cout << pq.top() << std::endl;  
}



