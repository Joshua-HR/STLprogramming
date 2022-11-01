#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include "show.h"

int main()
{
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };
	std::list<int>   s = { 1,2,3,4,5,6,7,8,9,10 };

	// v 와 s 를 각각 뒤집에 보세요
	// ?
	// ?

	show(v); // 10, 9, 8, 7, 6, 5, 4, 3, 2, 1
	show(s); // 10, 9, 8, 7, 6, 5, 4, 3, 2, 1

	return 0;
}

