#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

// 알고리즘 

// 일반적인 의미 : "문제를 해결하는 방법" 이라는 일반적인 의미

// STL 에서의 의미 : "std::find" 같은 멤버 함수가 아닌 일반함수(템플릿)

// 헤더
// <algorithm> : 대부분 이곳에
// <numeric>   : 수치 계산 관련
// <memory>    : 메모리 관련


int main()
{
	std::vector<int> v = { 1,2,3,1,2,3,1,2,3,1 };
	std::list<int>   s = { 1,2,3,1,2,3,1,2,3,1 };
	
	// v 와 s 에서 3을 찾고 싶다.
	// 1. find 를 멤버 함수로 제공했다면 
	// 장점 : 사용하기 쉽다.
	// 단점 : find 를 모든 컨테이너에 멤버로 제공해야 한다.
	//       "새로운 알고리즘"이 생기면 역시 모든 컨테이너에 제공해야 한다
//	v.find(3);
//	s.find(3);

	// 방법 2. 일반함수(템플릿) 한개로 모든 컨테이너 사용하자
	// => STL 방식
	auto p = std::find( v.begin(), v.end(), 3);


	// 생각해 볼 문제.
	// => 인자로 반복자가 아니라 컨테이너를 받는 버전은 없나요 ?
	// => C++17 까지는 없습니다.
	// => C++20 부터는 있습니다.
//	auto p2 = std::find(v, 3); // 이렇게는 아니고
//	auto p2 = std::ranges::find(v, 3); // 이렇게 사용합니다.

	return 0;
}



















//
