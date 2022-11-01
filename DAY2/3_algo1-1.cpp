// 3_algo1-1
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main()
{
	std::vector<int> v = { 1,2,3,1,2,3,1,2,3,1 };

	// 1. 대부분의 알고리즘은 인자로 "반복자"를 받게 됩니다.
	// 2. 반환 값도 반복자인 경우가 많습니다.
	// 3. find 는 검색 실패시 0 이 아닌 last 를 반환 합니다.

	auto p = std::find(v.begin(), v.end(), 3);

	if (p == v.end())
		std::cout << "검색 실패" << std::endl;
	else
		std::cout << "검색 성공 : " << *p << std::endl;


	return 0;
}

