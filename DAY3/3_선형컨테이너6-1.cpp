#include <vector>
#include <iostream>
#include <algorithm>
#include <list>
#include <string>
#include <fstream>
#include "show.h"

// 람다표현식을 사용하는 것 보다
// 함수 객체를 직접 만드는 것이 좋을때도 있습니다.
struct FindChar
{
	std::string data;

	FindChar(const std::string& s) : data(s) {}

	bool operator()(char c) const
	{
		// c 가 data 안에 있는지 확인 한다
		return data.find(c) != std::string::npos;
	}	
};






int main()
{
	std::vector<std::string> v;
	std::ifstream f("3_선형컨테이너6.cpp"); // 현재 파일이름

	std::string s;
	while (std::getline(f, s))
		v.push_back(s);
	//----------------------------
	for (auto& s : v)
	{
		FindChar fc("aeiouAEIOU");

		std::replace_if(s.begin(), s.end(), fc, ' ');
	}


	//-------------------------------------
	for (auto& n : v)
		std::cout << n << std::endl;
}


