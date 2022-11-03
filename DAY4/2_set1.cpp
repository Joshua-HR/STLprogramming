#include <iostream>
#include "show.h"

#include <set> // Red Black Tree로 구현

int main()
{
	std::set<int> s;

	s.insert(20);
	s.insert(30);
	s.insert(15);
	s.insert(5);
	s.insert(40);
	s.insert(25);

	// 반복자는 가장 왼쪽 자식(작은값)을 가리킵니다.

	auto p = s.begin();

	while (p != s.end())
	{
		std::cout << *p << std::endl;

		++p; // "inorder traversal" 순회
			 // 즉, 크기 순서로 이동
	}
	
}







