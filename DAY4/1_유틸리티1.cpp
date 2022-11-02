#include <iostream>
#include "show.h"

template<typename T> void foo(T a) {}

int main()
{
	// pair : 서로다른 타입 2개를 보관하는 구조체
	std::pair<int, double> p1(1, 3.4);

	std::cout << p1.first << std::endl;  // 1
	std::cout << p1.second << std::endl; // 3.4

	// pair 를 직접 사용 : 타입을 전달해야 하므로 복잡해 보입니다
	// make_pair 사용   : 타입 생략가능

	auto p2 = std::make_pair(1, 3.4); // 함수 템플릿은 
									  // 타입인자 생략가능

	// 함수 인자로 pair 를 보낼때 make_pair 를 사용하는게 편리합니다.
	foo( std::pair<int, double>(1, 3.4) ); // pair 임시객체로 전달
	foo( std::make_pair(1, 3.4) ); // make_pair 사용
}
