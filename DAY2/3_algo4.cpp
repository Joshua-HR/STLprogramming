#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include "show.h"

int main()
{
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };
	std::list<int>   s = { 1,2,3,4,5,6,7,8,9,10 };

	// v 와 s 를 각각 뒤집어 보세요
	// 1. 멤버 함수중 reverse() 가 있는지 찾아라!
	// 2. 알고리즘에서 "std::reverse" 를 찾아라

	std::reverse( v.begin(), v.end() );
//	std::reverse( s.begin(), s.end() ); // list 도 가능하지만

	s.reverse(); // 멤버 함수도 있습니다. 멤버 함수를 우선시 하세요


	// 알고리즘   reverse : 요소끼리 swap
	// list 멤버 reverse : next, prev 포인터를 swap
	//			=> 저장하는 요소의 크기가 크다면 이렇게 하는것이 효율적
	
	

	

	show(v); // 10, 9, 8, 7, 6, 5, 4, 3, 2, 1
	show(s); // 10, 9, 8, 7, 6, 5, 4, 3, 2, 1

	return 0;
}

