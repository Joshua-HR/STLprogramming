#include <iostream>
#include <unordered_set>
#include <set>
#include "show.h"

int main()
{
//	std::set<int> s;
	std::unordered_set<int> s;

	// 핵심 1. set 과 unordered_set 의 사용법의 거의 동일합니다
	//        하지만 내부 구현은 완전히 다릅니다.

	s.insert(10);
	s.insert(35);
	s.insert(20);
	s.insert(25); // set : root 요소 부터 비교하면서 left/right 배치
				  // unordered_set
				  // => 25를 hash 함수로 보내서 hash 값을 얻은후에 보관
				  //    

	auto p = s.find(20); // set : root 요소 부터 비교하면서 검색
						 // unordered_set : hash 함수를 사용해서
						//		hash 값을 가지고 검색

	std::cout << *p << std::endl;

	show(s); // begin 부터 ++로 이동.
			// set : 정렬을 유지
			// unordered_set : 정렬 안됨
}

