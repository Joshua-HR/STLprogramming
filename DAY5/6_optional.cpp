// 6_optional
#include <iostream>
#include <optional>

// C++17 에서 간단한 도구 몇개가 추가되었습니다

// int                  : 정수값
// std::pair<int, bool> : 정수값 + 성공실패여부
// optional<int>        : 정수값 + 성공실패여부

std::optional<int> foo()
{
	return 100; // 성공
//	return std::nullopt;
}
int main()
{
	auto ret = foo();

	if (ret)
	{
		int n = *ret; // 값 꺼내기 
		std::cout << n << std::endl;
	}
	else
		std::cout << "실패" << std::endl;
}
