#include <iostream>
#include <vector>
#include <list>
#include <functional>
#include <algorithm> 
#include <numeric>	 
#include "show.h"

int main()
{
	std::vector<int> v1 = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> v2;

	// <numeric> 헤더에 "수치 계산" 관련 다양한 알고리즘이 있습니다.

	std::partial_sum(v1.begin(), v1.end(), std::back_inserter(v2));
	show(v2); // 1, 3, 6, 10, 15 ...  


	// 대부분의 수치 알고리즘은 연산 방법 교체 됩니다.
	std::partial_sum(v1.begin(), v1.end(), v2.begin(), 
								std::multiplies<int>() );

	show(v2);


	// 근접차를 구하는 알고리즘
	std::adjacent_difference(v1.begin(), v1.end(), v2.begin());

	show(v2);
}