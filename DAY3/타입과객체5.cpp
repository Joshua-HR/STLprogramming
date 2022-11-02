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
	// => 에러
	// => 람다 표현식 자체는 "평가되지 않은 표현식"에 넣을수 없다.
	// => decltype() 은 평가되지 않은 표현식 입니다.
	// int n;
	// decltype(n) : int
//	std::priority_queue<int, std::vector<int>, 
//				decltype([](int a, int b) { return abs(a) < abs(b); }) > pq;



	// 방법 3. 람다표현식을 auto 변수에 담기
	// => 에러!
	// => decltype(cmp) 자체는 문제가 없습니다.
	// => 이유 : 람다표현식이 만드는 타입은 디폴트 생성자가 없습니다.
	// => priority_queue 내부에서 멤버 데이타 만들때 디폴트 생성자 요구!

//	auto cmp = [](int a, int b) { return abs(a) < abs(b); };

//	std::priority_queue<int, std::vector<int>,	decltype(cmp) > pq;


	// 방법 4. 템플릿 인자로 타입을 전달하고, 생성자로 객체를 전달..!!
	// 디폴트 생성자가 아닌 복사 생성자를 사용하도록!!!
	auto cmp = [](int a, int b) { return abs(a) < abs(b); };
	std::priority_queue<int, std::vector<int>, decltype(cmp) > pq(cmp);

	pq.push(10);
	pq.push(-30);
	pq.push(20);

	std::cout << pq.top() << std::endl;  
}



