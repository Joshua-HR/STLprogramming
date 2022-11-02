#include <tuple>
#include <iostream>

int main()
{
	// pair : C++98. 서로 다른 타입의 객체 2개 보관
	std::pair<int, double> p1(3, 3.4);

	// pair 는 3개 이상도 보관가능합니다
	std::pair<int, std::pair<double, char>> p3(1, { 3.4, 'A' });

	double d = p3.second.first;
	//=============================================

	// pair 가 2개 이상도 보관 가능하지만 "복잡해 보입니다."
	// 그래서, C++11 에서 tuple 이 제공됩니다.

	// 핵심 1. std::tuple, std::make_tuple
	std::tuple<int, double, char> t1(1, 3.4, 'A');

	auto t2 = std::make_tuple(1, 3.4, 'A');


	// 핵심 2. std::get 으로 요소 접근

	std::get<1>(t2) = 9.9;	    

	double d = std::get<1>(t2);


}