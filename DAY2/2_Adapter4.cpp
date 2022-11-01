#include <iostream>
#include <list>
#include <algorithm>
#include "show.h"

int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7,3,9,10 };

	// 컨테이너에서 꺼내는 반복자는 "4가지"의 종류가 있습니다.
	// 1. 꺼내는 함수 알아 두세요
	// 2. 반복자 타입 알아 두세요( 단, 일반적으로는 auto 사용하세요)
	// 3. 일반 함수 버전도 모두 제공됩니다.

	std::list<int>::iterator p1 = s.begin();  // 정방향 반복자
								// std::begin(s);

	std::list<int>::reverse_iterator p2 = s.rbegin(); // 역방향 반복자
								// std::rbegin(s);
						
	std::list<int>::const_iterator p3 = s.cbegin();  // 상수 반복자
								// std::cbegin(s);
	int n = *p3; //ok
	*p3 = 3; // error. 상수 반복자 이므로

	std::list<int>::const_reverse_iterator p3 = s.crbegin();
								// std::crbegin(s);

}






