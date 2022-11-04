#include <iostream>
#include <vector>
#include <ranges> 
#include <algorithm>
#include <ranges>    	

int main()
{
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };


	// �Ʒ� �ڵ�� �ᱹ "operator |" ������ �Լ��� �������� ��ũ���Դϴ�.
//	auto tv = v | std::views::filter([](int n) {return n % 2 == 0; })
//				| std::views::take(3);

	// ���ڵ�� ������ �ڵ�
	std::ranges::filter_view fv(v, [](int n) {return n % 2 == 0; });
	std::ranges::take_view tv(fv, 3);



	for (auto n : tv) // 2, 4, 6
		std::cout << n << ", ";

}