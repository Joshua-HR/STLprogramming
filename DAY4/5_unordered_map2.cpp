#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <list>
#include <map>
#include <unordered_map>
#include <algorithm>
#include "show.h"
// ����. 

int main()
{
//	std::map<std::string, std::list<int>> indexMap; // �ٽ�
	std::unordered_map<std::string, std::list<int>> indexMap; // �ٽ�


	std::ifstream fin("3_map2.cpp"); // ���� ���� �̸�

	std::string s;
	int no = 0;

	while (std::getline(fin, s))	// �� �� �б�
	{
		++no;
		std::istringstream iss(s);
		std::string word;

		while (iss >> word) 
		{

			indexMap[word].push_back(no);
		}
	}

	for (const auto& [key, value] : indexMap)
	{

		std::cout << key << " : ";

		show(value);	// p.second �� list<int>
	}

}



