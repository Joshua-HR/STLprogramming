// 2_컨테이너의공통의특징2
#include <list>
#include "show.h"

// 핵심 : 제거와 반환을 동시에 하는 멤버 함수는 없다.

int main()
{
	std::list<int> s = { 1,2,3,4,5 };

	int n = s.back();	// 제일 마지막 요소 얻기
						// 제거 되지 않습니다.

	show(s); // 1, 2, 3, 4, 5

	s.pop_back(); // 마지막 요소를 제거만. 반환값은 void!!

//	int n2 = s.pop_back(); // error.!!!

	show(s);
}