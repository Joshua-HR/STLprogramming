#include <iostream>
#include <chrono>
using namespace std::chrono;

// duration 정의 : 특정 단위의 갯수(tick count)를 표현하는 자료구조
//				  10초 => 1초의 10개
//					   => 1/1000초의 10000개..

// => 한개 값을 보관합니다.
// => 템플릿 2번째 인자로 단위를 전달합니다.
//    단위가 다르면 다른 입니다.

int main()
{
	// 1. duration 사용
	std::chrono::duration<int, std::ratio<1, 100>>  d1(2); 
	std::chrono::duration<int, std::ratio<1, 1000>> d2(d1); // 20

	std::cout << d2.count() << std::endl; // 20

	// 2. duration 을 사용해서 거리를 나타내는 타입을 설계해 봅시다.
	using Meter      = std::chrono::duration<int, std::ratio<1, 1>>;
	using CentiMeter = std::chrono::duration<int, std::ratio<?>>;
	using KiloMeter  = std::chrono::duration<int, std::ratio<?>>;
	using MilliMeter = std::chrono::duration<int, std::ratio<?>>;
}
