#include <iostream>
#include <vector>
#include <ranges> 
#include <algorithm>
#include <ranges>    // C++20 ���� �߰��� ���
					 // �� �ȿ� 20������ view �� �ֽ��ϴ�.		

int main()
{
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	// �ٽ� : ��ø ����
	std::ranges::reverse_view rv(v);
	std::ranges::take_view tv(rv, 3);

	for (auto n : tv) // 10, 9, 8
		std::cout << n << ", ";

}