#include <iostream>
#include <vector>
#include <ranges> 
#include <algorithm>


int main()
{
	std::vector<int> v = { 1,2,3,7,8,9,4,5,6,10 };

	// C++11 �� ���ο� for ��
	for (auto n : v)
		std::cout << n << ", ";


	// ������ �� �ڵ带 �����Ϸ��� �Ʒ� ó������ �մϴ�.
	auto first = v.begin();  // �迭�� ��� std::begin(v)
	auto last = v.end();

	for (; first != last; ++first)
	{
		auto n = *first;
		//-----------------------------
		std::cout << n << ", ";
	}

}