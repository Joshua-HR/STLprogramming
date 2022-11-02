#include <tuple>
#include <vector>
#include <iostream>

int main()
{
	// C++14 까지는 클래스 템플릿의 경우
	// "반드시 타입 인자를 보내야 합니다."
	std::tuple<int, double, char> t1(1, 3.4, 'A');

	auto t2 = std::make_tuple(1, 3.4, 'A');



}