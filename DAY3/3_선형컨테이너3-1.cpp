// 3_선형컨테이너3-1
#include <vector>
#include <iostream>
#include <algorithm>
#include "show.h"

int main()
{
	std::vector<int> v = { 1,2,3, 1,2,3, 1,2,3, 1 };

	std::cout << v.size() << ", " << v.capacity() << std::endl; // 10, 10

	// 핵심 1. std::remove 는 컨테이너의 "size" 를 줄이지 않는다.
	auto p = std::remove(v.begin(), v.end(), 3);

	std::cout << v.size() << ", " << v.capacity() << std::endl; // 10, 10

	show(v); // v 의 모든 요소 출력 : 1,2,1,2,1,2,1,2,3,1


	// 핵심 2. erase 도 실제 메모리를 줄이지는 않습니다. size 만 변경
	v.erase(p, v.end());

	std::cout << v.size() << ", " << v.capacity() << std::endl; // 7, 10


	// 핵심 3. shink_to_fit() 에 실제 메모리 줄이는 작업
	v.shrink_to_fit(); 
	std::cout << v.size() << ", " << v.capacity() << std::endl; // 7, 7


	// 핵심 4.
	v.clear();
	std::cout << v.size() << ", " << v.capacity() << std::endl; // 0, 7

}