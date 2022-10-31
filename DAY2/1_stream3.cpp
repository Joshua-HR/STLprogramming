#include <iostream>
#include <iterator>
#include <list>
#include <fstream> // C++ ���� ����� ���.

int main()
{
	// 1. ��� ��Ʈ�� �ݺ���
	std::ostream_iterator<int> p1(std::cout, " ");

	*p1 = 10; // std::cout << 10 << " ";


	// 2. �Է� ��Ʈ�� �ݺ���
	std::istream_iterator<int> p2(std::cin);

	int n = *p2; // std::cin >> n  �� �ǹ� �Դϴ�.

	*p1 = n;     // std::cout << n << " "
}

