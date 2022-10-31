#include <iostream>
#include <list>

int main()
{
	std::list<int> s1 = { 1,2,3 };

	// 핵심 1. end() 로 얻는 반복자는 마지막이 아닌 마지막 다음을 가리킵니다.
	// => "past the end" 라고 합니다.
	auto p1 = std::begin(s1); // s1.begin();
	auto p2 = std::end(s1);	  // s1.end();

	*p1 = 10; // ok
//	*p2 = 10; // 버그.. runtime error

	// 핵심 2. end로 얻는 반복자는 == 와 != 연산만 사용해야 합니다.
	// "[p1, p2)" 로 표기 합니다.

	while (p1 != p2)
	{
		++p1;
	}

	// 3. 컨테이너가 비어 있으면 .begin() == .end() 입니다.
	std::list<int> s3;
	if (s3.empty()) {} // true

	if (std::begin(s3) == std::end(s3)) {}	
	if (s3.begin()) == s3.end()) {}
}