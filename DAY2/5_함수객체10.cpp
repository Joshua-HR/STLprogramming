// 5_함수객체10
#include <iostream>
#include <vector>
#include <algorithm>
#include "show.h"

inline bool cmp1(int a, int b) { return a < b; }

int main()
{
	std::vector<int> v = { 1,3,5,7,9,2,4,6,8,10 };

	// std::sort() 사용하기 1.
	std::sort(v.begin(), v.end());

	show(v);
}
