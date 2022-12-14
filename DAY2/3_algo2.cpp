#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include "show.h"

// 핵심 : "알고리즘은 컨테이너를 알지 못한다."

int main()
{
	std::vector<int> v = { 1,2,3,1,2,3,1,2,3,1 };

	// std::remove : 주어진 구간에서 특정 요소를 제거하는 알고리즘
	// => remove 는 어떤 컨테이너인지 알수 없습니다.
	// => 따라서 메모리를 직접 제거할수 없습니다.
	// => 단지, 조건을 만족하는 요소를 만나면, 다음 요소를 당기는 효과만
	//    있습니다.
	// => 반환값 p는 유효한 마지막 요소의 다음을 가리킵니다.

	// 핵심 : 알고리즘은 컨테이너를 줄일수는 없습니다.
	auto p = std::remove(v.begin(), v.end(), 3);

	show(v);  

	// 컨테이너 자체를 줄이려면 "멤버함수"를 사용해야 합니다.
	//v.erase(p);		 // p만 제거
	v.erase(p, v.end()); // 구간(p ~ v.end()) 를 제거

	show(v);

	// 연속된 메모리인 vector 에서 "3"을 제거하는 코드는
	// 위 방법이 최선입니다.
	// "3"을 만날때 마다 메모리 제거를 할수는 없습니다.
	// 결코, 위 방식이 나쁜 방법 아닙니다.

	return 0;
}
// vector 의 erase, resize 는 약간의 차이가 있습니다.
// => 내일 vector 배울때 등장




















//
