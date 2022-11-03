#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <list>
#include <map>
#include <unordered_map>
#include <algorithm>
#include "show.h"
// 예제. 

int main()
{
//	std::map<std::string, std::list<int>> indexMap; // 핵심
	std::unordered_map<std::string, std::list<int>> indexMap; // 핵심


	std::ifstream fin("3_map2.cpp"); // 현재 파일 이름

	std::string s;
	int no = 0;

	while (std::getline(fin, s))	// 한 줄 읽기
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

		show(value);	// p.second 는 list<int>
	}

}



