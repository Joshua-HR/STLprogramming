#include <iostream>
#include <vector>
#include <ranges> 
#include <algorithm>


int main()
{
	std::vector<int> v = { 1,2,3,7,8,9,4,5,6,10 };

	// C++11 의 새로운 for 문
	for (auto n : v)
		std::cout << n << ", ";


	// 원리는 위 코드를 컴파일러가 아래 처럼변경 합니다.
	auto first = v.begin();  // 배열인 경우 std::begin(v)
	auto last = v.end();

	for (; first != last; ++first)
	{
		auto n = *first;
		//-----------------------------
		std::cout << n << ", ";
	}

}