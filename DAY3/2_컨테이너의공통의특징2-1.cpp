// 2_컨테이너의공통의특징2-1
#include <list>
#include "show.h"

int main()
{
	std::list<int> s = { 1,2,3,4,5 };

	// 1. 요소와 반복자를 잘 구별 하세요
	auto n = s.front(); // 1번째 요소 얻기, auto 는 int
	auto p = s.begin(); // 1번째 요소를 가리키는 반복자 얻기
						// auto 는 iterator
						// 요소에 접근 하려면 "*p"

	// 2. "요소를 제거" 하면서 "요소를 반환" 하는 멤버 함수는 없습니다.
//	int n2 = s.pop_front(); // error
							// pop_front는 반환 타입이 void

	// 3. 단, erase는 반환 값이 void 가 아닙니다.
	std::list<int> s2 = { 1,2,3,4,5 };
	auto p2 = s2.begin();

	while (p2 != s2.end())
	{
		++p2;
	}
	
}