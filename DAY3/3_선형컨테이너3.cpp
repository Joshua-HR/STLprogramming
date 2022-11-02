#include <vector>
#include <iostream>
#include <algorithm>
#include "show.h"

// capacity 개념 - 중요 합니다.

int main()
{
	std::vector<int> v(10, 0);

	v.resize(7); // 어떻게 구현했을까요 ?

	std::cout << v.size()	  << std::endl; // 7
	std::cout << v.capacity() << std::endl; // 10
	
}




