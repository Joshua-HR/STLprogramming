#include <iostream>
#include <unordered_set>
#include <string>
#include "show.h"

// set			 : tree, ���ĵǾ� ����, �˻� ����			- C++98
// unordered_set : hash, ���� �ȵǾ� ����, �˻� ���� ����	- C++11

int main()
{
	// �ٽ� 1. C++ ǥ�� �ؽ� �Լ�(��ü)
	std::hash<int> hi;
	std::hash<double> hd;
	std::hash<std::string > hs;

	std::cout << hi(99) << std::endl;
	std::cout << hd(3.4) << std::endl;
	std::cout << hs("hello") << std::endl;
}

