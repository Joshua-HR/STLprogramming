#include <iostream>
#include <list>
#include <algorithm>

int main()
{
	std::list<int> s1 = { 1,2,3,4,5 };
	std::list<int> s2 = { 0,0,0,0,0 };

	// s1 에 있는 모든 요소를 s2로 복사 하고 싶다.

	// 방법 1. C++11 의 새로운 for 문 사용
	/*
	int i = 0;
	for (auto e : s1)
	{
		s2[i++] = e;  // [] 연산은 vector 는 되는데 
					  // list 는 안됩니다.
	}
	*/

	// 방법 2. 반복자를 꺼내서 반복문 사용
	auto p1 = s1.begin();
	auto p2 = s2.begin();

	while (p2 != s2.end())
	{
		*p2 = *p1;
		++p2;
		++p1;
	}

	// 방법 3. 위 방법2의 코드를 구현한 함수가 std::copy 입니다.
	std::copy(s1.begin(), s1.end(), // 이 구간의 모든 요소를
			  s2.begin());          // 이 구간으로 복사해 달라


}