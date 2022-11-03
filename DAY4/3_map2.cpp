#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <list>
#include <map>
#include <algorithm>
#include "show.h"
// 예제. 

int main()
{
	std::map<std::string, std::list<int>> indexMap; // 핵심
										// 구조 잘생각해 보세요

	std::ifstream fin("3_map2.cpp"); // 현재 파일 이름
	
	std::string s;
	int no = 0;

	while (std::getline(fin, s))	// 한 줄 읽기
	{
		++no;
		std::istringstream iss(s);
		std::string word;

		while (iss >> word) // 한줄 => 단어로 분리
		{
			// 키값(word) 이 있으면 value(list) 반환
			// 없어도 "신규로 만들고" value(list)반환
			indexMap[word].push_back(no);
		}
	}
	//=======================================
	// map 의 모든 항목 출력
	/*
	for (const auto& p : indexMap)
	{
		// p 는 결국 pair 의 참조 입니다.
		std::cout << p.first << " : ";

		show(p.second);	// p.second 는 list<int>
	}
	*/

	// C++17 의 "structural binding" 문법을 사용하면 좀더 편리합니다.
	// map 의 요소는 pair 인데. 
	// first, last 값을 각각 key, value 에 담겠다는 의미.
	for (const auto& [key, value] : indexMap)
	{
		
		std::cout << key << " : ";

		show( value );	// p.second 는 list<int>
	}

}


