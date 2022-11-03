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




	auto p = s.begin();

	while (p != s.end())
	{
		std::cout << *p << std::endl;

		++p; 
	}

}







