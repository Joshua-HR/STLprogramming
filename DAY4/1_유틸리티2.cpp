#include <tuple>
#include <iostream>

int main()
{
	// pair : C++98. ���� �ٸ� Ÿ���� ��ü 2�� ����
	std::pair<int, double> p1(3, 3.4);

	// pair �� 3�� �̻� ���������մϴ�
	std::pair<int, std::pair<double, char>> p3(1, { 3.4, 'A' });

	double d = p3.second.first;
	//=============================================

	// pair �� 2�� �̻� ���� ���������� "������ ���Դϴ�."
	// �׷���, C++11 ���� tuple �� �����˴ϴ�.

	// �ٽ� 1. std::tuple, std::make_tuple
	std::tuple<int, double, char> t1(1, 3.4, 'A');

	auto t2 = std::make_tuple(1, 3.4, 'A');


	// �ٽ� 2. std::get ���� ��� ����

	std::get<1>(t2) = 9.9;	    

	double d = std::get<1>(t2);


}