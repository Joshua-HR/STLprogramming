#include <iostream>
#include <unordered_set>
#include <string>
#include "show.h"

// set			 : tree, 정렬되어 있음, 검색 빠름			- C++98
// unordered_set : hash, 정렬 안되어 있음, 검색 아주 빠름	- C++11

int main()
{
	// 핵심 1. C++ 표준 해쉬 함수(객체)
	std::hash<int> hi;
	std::hash<double> hd;
	std::hash<std::string > hs;

	std::cout << hi(99) << std::endl;
	std::cout << hd(3.4) << std::endl;
	std::cout << hs("hello") << std::endl;
}

