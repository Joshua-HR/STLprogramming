#include <iostream>
#include <vector>
#include <ranges> 
#include <algorithm>
#include <ranges>    	

int main()
{
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };


	// 아래 코드는 결국 "operator |" 연산자 함수를 재정의한 테크닉입니다.
//	auto tv = v | std::views::filter([](int n) {return n % 2 == 0; })
//				| std::views::take(3);

	// 위코드와 동일한 코드
	std::ranges::filter_view fv(v, [](int n) {return n % 2 == 0; });
	std::ranges::take_view tv(fv, 3);



	for (auto n : tv) // 2, 4, 6
		std::cout << n << ", ";

}