#include <iostream>
#include <vector>
#include <algorithm>

// show �� ����� ���ô�.

int main()
{
	std::vector<int> v = { 1,2,3,4,5 };

	show(v);
	show(v.begin(), v.end());
}