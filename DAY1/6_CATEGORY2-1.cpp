// 6_CATEGORY2-1
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main()
{
	// 핵심 1. 각 컨테이너가 가진 반복자가 5가지 category 중에
	//        어디에 속하는지 반드시 알아 두세요
	std::vector<int> v = { 1,2,3,4 }; // 임의접근 반복자를 가짐
	std::list<int> s   = { 1,2,3,4 }; // 양방향 반복자를 가짐

	// 핵심 2. 각 알고리즘이 요구하는 반복자의 종류를 알아 두세요
	std::sort(v.begin(), v.end());
//	std::sort(s.begin(), s.end());
}