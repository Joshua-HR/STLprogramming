#include <iostream>
#include <iterator>
#include <list>
#include <fstream> // C++ ���� ����� ���.

int main()
{
	std::ostream_iterator<int> p1(std::cout, " ");

	*p1 = 10;


	std::ofstream fout("a.txt"); // ��� ������ ���� C++ ��ü

	std::ostream_iterator<int> p2(fout, " ");
	*p2 = 10;
	*p3 = 20; // "10 20" �� "a.txt" �� ���
}

