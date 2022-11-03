#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <list>
#include <map>
#include <algorithm>
#include "show.h"
// ����. 

int main()
{
	std::map<std::string, std::list<int>> indexMap; // �ٽ�
										// ���� �߻����� ������

	std::ifstream fin("3_map2.cpp"); // ���� ���� �̸�
	
	std::string s;
	int no = 0;

	while (std::getline(fin, s))	// �� �� �б�
	{
		++no;
		std::istringstream iss(s);
		std::string word;

		while (iss >> word) // ���� => �ܾ�� �и�
		{
			// Ű��(word) �� ������ value(list) ��ȯ
			// ��� "�űԷ� �����" value(list)��ȯ
			indexMap[word].push_back(no);
		}
	}
	//=======================================
	// map �� ��� �׸� ���
	/*
	for (const auto& p : indexMap)
	{
		// p �� �ᱹ pair �� ���� �Դϴ�.
		std::cout << p.first << " : ";

		show(p.second);	// p.second �� list<int>
	}
	*/

	// C++17 �� "structural binding" ������ ����ϸ� ���� ���մϴ�.
	// map �� ��Ҵ� pair �ε�. 
	// first, last ���� ���� key, value �� ��ڴٴ� �ǹ�.
	for (const auto& [key, value] : indexMap)
	{
		
		std::cout << key << " : ";

		show( value );	// p.second �� list<int>
	}

}


