#include <iostream>
#include <vector>
#include <algorithm>
#include "show.h"

int main()
{
	std::vector<int> v1 = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> v2 = { 0,0,0,0,0,0,0,0,0,0 };


	// 1. 알고리즘의 기본 버전(inplace 버전)
//	auto p1 = std::remove(v1.begin(), v1.end(), 3);
						// v1 : 1,2,4,5,6,7,8,9,10,10

	// 2. 알고리즘의 조건자 버전
//	auto p2 = std::remove_if(v1.begin(), v1.end(), 
//							[](int n) {return n % 2 == 0; });
						// v1 : 1, 3, 5, 7, 9, 6,7,8,9,10

	// 3. 알고리즘의 복사 버전
	// 반환값 "p1" 은 v2의 반복자 입니다.
	// "copy" 후 "remove" 해도 동일한 효과를 볼수 있지만(2번의 순환)
	// => remove_copy() 를 사용하면 한번의 순환으로 구현가능합니다.
	//    즉, 2배 빨라집니다.
//	auto p3 = std::remove_copy(v1.begin(), v1.end(), v2.begin(), 3);
						// v1 : 1,2,3,4,5,6,7,8,9,10
						// v2 : 1,2,4,5,6,7,8,9,10, 0

	// 질문 : 아래 함수는 있을까요 ? 없습니다.
	// 아래처럼 하고 싶으면
	// 1. v1 을 v2로 copy 후에
	// 2. v2 을 sort 하면 됩니다.
	// std::sort_copy(v1.begin(), v1.end(), v2.begin());

	// 4. 복사 조건자 버전
	auto p4 = std::remove_copy_if(v1.begin(), v1.end(), 
								  v2.begin(), 
								  [](int n) { return n % 2 == 0; });


	show(v1);
	show(v2);
}
