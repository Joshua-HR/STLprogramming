#include <iostream>
#include "show.h"

#include <set> 
#include <functional>

int main()
{
	// ÇÙ½É 1. set ÀÇ template ÀÎÀÚ
	std::set<int> s;
//	std::set<int, std::less<int>, std::allocator<int> > s;
//	std::set<int, std::greater<int> > s;

	s.insert(20);
	s.insert(30);
	s.insert(15);
	s.insert(5);
	s.insert(40);
	s.insert(25);

	auto p = s.begin();

	while (p != s.end())
	{
		std::cout << *p << std::endl;

		++p; 
	}

}







