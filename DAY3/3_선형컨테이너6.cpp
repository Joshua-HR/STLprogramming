#include <vector>
#include <iostream>
#include <algorithm>
#include <list>
#include <string>
#include <fstream>
#include "show.h"

// std::cin >> s		     : 한 단어 입력
// std::getline(std::cin, s) : 한 문장(줄) 입력

int main()
{
	std::vector<std::string> v;
	std::ifstream f("3_선형컨테이너6.cpp"); // 현재 파일이름

	std::string s;
	while (std::getline(f, s))
		v.push_back(s);
	//----------------------------

//	std::reverse(v.begin(), v.end());		// 파일 상/하 뒤집기
//	std::reverse(v[0].begin(), v[0].end()); // 첫번째 줄 좌우 뒤집기

	for (auto& s : v)
	{
//		std::reverse(s.begin(), s.end());

		// 'i' 자를 공백으로 치환!
		// std::replace(s.begin(), s.end(), 'i', ' ');

		// 위코드 참고 해서 모든 모음을 공백으로 치환해 보세요
	}


	//-------------------------------------
	for (auto& n : v)
		std::cout << n << std::endl;
}


