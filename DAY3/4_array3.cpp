#include <iostream>
#include <algorithm>
#include <array>	 // C++11 에서 추가된 컨테이너

int main()
{
	std::array<int, 5> arr = { 1,2,3,4,5 };

	// 1. 배열처럼 사용하세요
	arr[0] = 10;

	int n1 = arr.front();
	int n2 = arr.back();

	std::array<int, 5>::size_type sz = arr.size();

	// 2. 다른 컨테이너처럼 반복자도 사용가능
	auto p1 = arr.begin();
	auto p2 = arr.end();

	// 핵심 : array 는 "raw array" 와 같다는 점을 꼭 기억하세요
	arr.push_back(10);
	arr.resize(20);
	arr.insert(arr.begin(), 3);
}