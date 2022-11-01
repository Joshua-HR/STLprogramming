#include <iostream>
#include <iterator>
#include <list>
#include <fstream> // C++ ���� ����� ���.

int main()
{
	std::ifstream fin("1_stream5.cpp"); 

	// std::istream_iterator : white space(space, tab, enter)����
//	std::istream_iterator<char> p1(fin);
//	std::istream_iterator<char> p2;     // ������ ���ڸ� �������� ������
										// EOF �Դϴ�.

	// std::istreambuf_iterator : white space �� �Է¿� ����
	std::istreambuf_iterator<char> p1(fin);
	std::istreambuf_iterator<char> p2;

	std::ostream_iterator<char> p3(std::cout, "");

	
	// �Ʒ� ������ �ǹ̸� ������ ������
	std::copy(p1, p2, p3);
}

