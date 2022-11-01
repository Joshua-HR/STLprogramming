#include <iostream>
#include <list>
#include <algorithm>
#include "show.h"

int main()
{
	std::list<int> s1 = { 1,2,3,4,5,6,7,3,9,10 };
	std::list<int> s2 = { 0,0,0,0,0,0,0,0,0,0 };

	// s1 에서 3 을 찾고 싶다.
	auto ret1 = std::find(s1.begin(), s1.end(), 3);

	// s1 에서 3 을 찾고 싶다. 단, 뒤에서 부터 찾고 싶다.
//	auto ret2 = std::find(s1.end(), s1.begin(), 3); // 안됩니다.
	auto ret2 = std::find(s1.rbegin(), s1.rend(), 3); // ok

	// 역반복자 덕분에 "모든 알고리즘"은 거꾸로도 동작 합니다.


	// std::copy 를 사용해서 s1의 모든 내용을 s2로 복사해보세요
	// 단, 거꾸로 복사해 보세요..

//	std::copy(s1.begin(), s1.end(), s2.begin() ); // 그대로 복사
//	std::copy(s1.rbegin(), s1.rend(), s2.begin()); // 거꾸로 복사
	std::copy(s1.begin(), s1.end(), s2.rbegin()); // 거꾸로 복사

	show(s2); // 10, 9, 3, 7, 6,5,4,3,2,1  나와야 합니다.


}






