// 6_optional
#include <iostream>
#include <optional>

// C++17 ���� ������ ���� ��� �߰��Ǿ����ϴ�

// int                  : ������
// std::pair<int, bool> : ������ + �������п���
// optional<int>        : ������ + �������п���

std::optional<int> foo()
{
	return 100; // ����
//	return std::nullopt;
}
int main()
{
	auto ret = foo();

	if (ret)
	{
		int n = *ret; // �� ������ 
		std::cout << n << std::endl;
	}
	else
		std::cout << "����" << std::endl;
}
