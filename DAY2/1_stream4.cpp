#include <iostream>
#include <iterator>
#include <list>
#include <fstream> // C++ ���� ����� ���.

int main()
{
	// ǥ�� �Է� ���ۿ��� �Է� �޴� �ݺ���
//	std::istream_iterator<int> p1(std::cin);


	std::ifstream fin("1_stream4.cpp"); // ���� �ҽ� �̸���������

	std::istream_iterator<char> p2(fin);

	char n = *p2; // ���Ͽ��� �ѹ��� �Է� �ޱ�


	std::cout << n << std::endl; // "#"
}

