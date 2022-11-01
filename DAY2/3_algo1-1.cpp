// 3_algo1-1
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main()
{
	std::vector<int> v = { 1,2,3,1,2,3,1,2,3,1 };

	auto p = std::find(v.begin(), v.end(), 3);

	return 0;
}

