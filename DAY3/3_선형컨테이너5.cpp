#include <vector>
#include <list>
#include <iostream>
#include <algorithm>
#include "show.h"

// 컨테이너를 보관하는 컨테이너

int main()
{
	std::vector<int> v1(10, 0);

	v1[0] = 10;


	// 컨테이너에 컨테이너를 보관하면 다양한 자료구조를 만들수 있습니다.

	std::vector< std::vector<int> > v2(10);

	v2[0][0] = 10; // runtime error. 요소가 크기가 0인 vector이므로


	std::vector< std::vector<int> > v3(10, std::vector<int>(10) );

	v3[0][0] = 10; // ok.. v3 는 10 * 10 의 matrix



	std::vector<std::list<int>> v4(10);

	v4[0].push_back(1);
	v4[0].push_back(2);
	v4[0].push_back(3);

	v4[1].push_back(10);
	v4[1].push_back(20);
	
}