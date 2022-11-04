#include <iostream>
#include <vector>
#include <ranges> 
#include <algorithm>
#include <ranges>    // C++20 에서 추가된 헤더
					 // 이 안에 20여개의 view 가 있습니다.		

int main()
{
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	// 핵심 : 중첩 가능
	std::ranges::reverse_view rv(v);
	std::ranges::take_view tv(rv, 3);

	for (auto n : tv) // 10, 9, 8
		std::cout << n << ", ";

}