// 타입과객체6
#include <iostream>

int main()
{
	// 핵심 1. 람다표현식의 최종 결과는 "타입"이 아닌 "객체" 입니다.
	auto f = [](int a, int b) { return a + b; };
			// class xxx{}; xxx();

	std::cout << typeid(f).name() << std::endl;

}