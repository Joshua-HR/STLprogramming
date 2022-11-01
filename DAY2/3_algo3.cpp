#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include "show.h"

// 핵심 : 어떤 컨테이너가 알고리즘(일반함수)과 
//       동일한 이름의 멤버 함수가 있다면 멤버 함수를 사용하라.

// 왜 알고리즘과 동일한 이름의 멤버함수를 별도로 제공하나요 ?

// 이유 1. 더 최적화된 구현이 가능할때
//        => std::remove(list.begin(), list.end()) 도 되지만
//		  => list.remove(3);  // 알고리즘 remove 보다 
//							  // list remove 가 좋다.!
// 
// 이유 2. 알고리즘으로 보낼수 없을때
//		  => std::sort( list.begin(), list.end()) // error
//        => list.sort()   // ok

// 결론 : 어떤 일을 하고 싶다면 ( ex, 요소를 제거 !! )
// => 무조건 멤버 함수를 먼저 찾으세요. 있으면 사용하세요
// => 없다면 알고리즘에서 찾으세요. 사용하세요
// => 알고리즘에 보낼수 없다면, 해당 컨테이너에서 그 작업을 할수 없는것!


int main()
{
//	std::vector<int> v = { 1,2,3,1,2,3,1,2,3,1 };
	std::list<int> v = { 1,2,3,1,2,3,1,2,3,1 };

	// 아래 4줄은 에러는 아닙니다.
	// 그런데, list 인 경우에는 "3"을 만날때 마다 바로 삭제 하는것이
	// 좋습니다.
	/*
	auto p = std::remove(v.begin(), v.end(), 3);
	show(v);
	v.erase(p, v.end()); 
	show(v);
	*/

	// 그래서, list 에는 별도의 "remove"라는 멤버 함수가 있습니다.
	v.remove(3); // 3을 만날때 마다 제거!

	show(v);

	return 0;
}











