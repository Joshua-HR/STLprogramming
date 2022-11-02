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
	// => 크기를 변경하는 모든 작업은 안됩니다.
	arr.push_back(10);			// error
	arr.resize(20);				// error
	arr.insert(arr.begin(), 3);	// error.

	// std::array 에서 꺼내는 반복자는 어떤 category 일까요 ?
	// => 연속된 메모리에 대한 반복자입니다.
	// => 임의접근 반복자 입니다.
	// => 모든 알고리즘 사용가능합니다.

}