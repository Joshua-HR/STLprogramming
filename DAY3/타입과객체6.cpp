// 타입과객체6
#include <iostream>

int main()
{
	// 핵심 1. 람다표현식의 최종 결과는 "타입"이 아닌 "객체" 입니다.
	auto f = [](int a, int b) { return a + b; };
			// class xxx{}; xxx();

	std::cout << typeid(f).name() << std::endl;


	// 핵심 2. 람다표현식이 만드는 타입은 디폴트 생성자가 없습니다.
//	decltype(f) f2;	// error. 
	// xxx      f2;

	decltype(f) f3 = f;	// ok.. 복사 생성자는 가능.
}