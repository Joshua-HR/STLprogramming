#include <iostream>
#include "show.h"

#include <set> 
#include <functional>

int main()
{
	// 핵심 1. set 의 template 인자
	std::set<int> s;
//	std::set<int, std::less<int>, std::allocator<int> > s;
//	std::set<int, std::greater<int> > s;

	s.insert(20);
	s.insert(30);
	s.insert(15);
	s.insert(5);
	s.insert(40);
	s.insert(25);

	// 핵심 2. set 은 중복을 허용하지 않습니다.
	// insert 반환 타입 : pair<반복자, bool> 
	
//	std::pair< std::set<int>::iterator, bool> ret = s.insert(15);

	auto ret = s.insert(15);

	if (ret.second == false)
	{
		std::cout << "입력 실패, 이미 값이 있습니다." << std::endl;
		std::cout << *(ret.first) << std::endl;
	}

	// 핵심 3. set 에서 요소의 삽입은 insert(emplace)만 가능합니다.
//	s.push_back(1); // error


	// 핵심 4. set 의 반복자는 읽기 전용 반복자 입니다.
	auto p = s.begin();
//	*p = 200;	// error	
	int n = *p; // ok


	// 핵심 5. 아래 코드를 평가해 보세요 - 중요!!

	// std::find 는 선형검색 입니다.
	// => first 부터 ++로 이동하면서 검색
	// => 아래 코드가 에러는 아니지만 성능이 좋지 않습니다.
	// => "Equality(동일)" 검색
	auto ret2 = std::find(s.begin(), s.end(), 25);

	std::cout << *ret2 << std::endl; // 25


	// set은 이진 검색이 빠릅니다.
	// => 알고리즘(일반함수)와 동일한 이름의 멤버 함수가 있다면
	//    멤버 함수를 사용해라!
	// => "Equivalency(동등)" 검색
	auto ret3 = s.find(25);
	std::cout << *ret3 << std::endl; // 25

}







