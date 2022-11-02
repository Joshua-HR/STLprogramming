// 3_선형컨테이너3-1
#include <vector>
#include <iostream>
#include <algorithm>

int main()
{
	std::vector<int> v = { 1,2,3, 1,2,3, 1,2,3, 1 };

	std::cout << v.size() << ", " << v.capacity() << std::endl; // ?

	auto p = std::remove(v.begin(), v.end(), 3);

	std::cout << v.size() << ", " << v.capacity() << std::endl; // ?
}