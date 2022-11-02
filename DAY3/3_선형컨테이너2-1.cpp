#include <vector>
#include <iostream>
#include <algorithm>
#include "show.h"

// vector 멤버 함수 정리

int main()
{
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	auto p = std::find(v.begin(), v.end(), 5);

	// 1. 삽입
//	v.push_front(10); // vector 는 안됨
	v.push_back(20);

	v.insert(p, 30); // p 가 가리키는 요소 앞에 30 넣기

	show(v); // 1,2,3,4,30,5,6,7,8,9,10,20


	// 2. 접근


	// 3. 요소 변경

}