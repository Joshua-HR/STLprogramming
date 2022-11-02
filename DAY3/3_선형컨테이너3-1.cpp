// 3_���������̳�3-1
#include <vector>
#include <iostream>
#include <algorithm>
#include "show.h"

int main()
{
	std::vector<int> v = { 1,2,3, 1,2,3, 1,2,3, 1 };

	std::cout << v.size() << ", " << v.capacity() << std::endl; // 10, 10

	// �ٽ� 1. std::remove �� �����̳��� "size" �� ������ �ʴ´�.
	auto p = std::remove(v.begin(), v.end(), 3);

	std::cout << v.size() << ", " << v.capacity() << std::endl; // 10, 10

	show(v); // v �� ��� ��� ��� : 1,2,1,2,1,2,1,2,3,1


	// �ٽ� 2. erase �� ���� �޸𸮸� �������� �ʽ��ϴ�. size �� ����
	v.erase(p, v.end());

	std::cout << v.size() << ", " << v.capacity() << std::endl; // 7, 10


	// �ٽ� 3. shink_to_fit() �� ���� �޸� ���̴� �۾�
	v.shrink_to_fit(); 
	std::cout << v.size() << ", " << v.capacity() << std::endl; // 7, 7


	// �ٽ� 4.
	v.clear();
	std::cout << v.size() << ", " << v.capacity() << std::endl; // 0, 7

}