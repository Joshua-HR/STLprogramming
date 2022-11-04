#include <iostream>
#include <functional>
using namespace std::placeholders;

void foo(int a, int& b) { b = 100; }

int main()
{	
	std::function<void(int)> f;
	
	int n = 0;

	// -------------------------------------------
//	f = std::bind(&foo, _1, n);  // 이 한줄을 생각 해 봅시다.
									// => n이 가진 값 0 으로 인자를 고정한다.
									//
	
//  f(0);	// foo(0, 0)							

	f = std::bind(&foo, _1, std::ref(n));// n 자체를 인자로 고정한다

	f(0);	// foo(0, n)

	std::cout << n << std::endl; // 결과 예측해 보세요


	// 핵심 
	// bind 는 기본적으로 "값"을 고정하는 방식 입니다.
	// 참조로 하고 싶으면 std::ref() 사용하세요
	// 
	// f = std::bind(&foo, _1, n);  // n 의 값으로 2번째 인자 고정
	// f = std::bind(&foo, _1, std::ref(n)); // n 을 2번째 인자로 고정
}


