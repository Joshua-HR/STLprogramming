#include <tuple>
#include <vector>
#include <iostream>

int main()
{
	// C++14 까지는 클래스 템플릿의 경우
	// "반드시 타입 인자를 보내야 합니다."
	std::tuple<int, double, char> t1(1, 3.4, 'A');

	// 그래서, 클래스 템플릿의 객체를 만드는 함수 템플릿 도움 함수를
	// 많이 사용 합니다. ( make_xxx)
	auto t2 = std::make_tuple(1, 3.4, 'A');


	// C++17 부터는 클래스 템플릿도 타입 인자 생략 가능합니다.
	std::tuple t3(1, 3.4, 'A');


	// 따라서, C++17 부터는 아래 처럼 해도 됩니다.
	std::vector<int> v1 = { 1,2,3,4,5 }; // C++14 까지
	std::vector      v2 = { 1,2,3,4,5 }; // C++17 이후 가능
}