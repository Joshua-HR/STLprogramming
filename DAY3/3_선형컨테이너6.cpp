#include <vector>
#include <iostream>
#include <algorithm>
#include <list>
#include <string>
#include <fstream>
#include "show.h"

// std::cin >> s		     : �� �ܾ� �Է�
// std::getline(std::cin, s) : �� ����(��) �Է�

int main()
{
	std::vector<std::string> v;
	std::ifstream f("3_���������̳�6.cpp"); // ���� �����̸�

	std::string s;
	while (std::getline(f, s))
		v.push_back(s);
	//----------------------------

//	std::reverse(v.begin(), v.end());		// ���� ��/�� ������
//	std::reverse(v[0].begin(), v[0].end()); // ù��° �� �¿� ������

	for (auto& s : v)
	{
//		std::reverse(s.begin(), s.end());

		// 'i' �ڸ� �������� ġȯ!
		// std::replace(s.begin(), s.end(), 'i', ' ');

		// ���ڵ� ���� �ؼ� ��� ������ �������� ġȯ�� ������
	}


	//-------------------------------------
	for (auto& n : v)
		std::cout << n << std::endl;
}


