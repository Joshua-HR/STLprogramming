#include <iostream>
#include "show.h"

template<typename T> void foo(T a) {}

int main()
{
	// pair : ���δٸ� Ÿ�� 2���� �����ϴ� ����ü
	std::pair<int, double> p1(1, 3.4);

	std::cout << p1.first << std::endl;  // 1
	std::cout << p1.second << std::endl; // 3.4

	// pair �� ���� ��� : Ÿ���� �����ؾ� �ϹǷ� ������ ���Դϴ�
	// make_pair ���   : Ÿ�� ��������

	auto p2 = std::make_pair(1, 3.4); // �Լ� ���ø��� 
									  // Ÿ������ ��������

}
