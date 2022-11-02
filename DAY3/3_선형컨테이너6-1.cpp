#include <vector>
#include <iostream>
#include <algorithm>
#include <list>
#include <string>
#include <fstream>
#include "show.h"

// ����ǥ������ ����ϴ� �� ����
// �Լ� ��ü�� ���� ����� ���� �������� �ֽ��ϴ�.
struct FindChar
{
	std::string data;

	FindChar(const std::string& s) : data(s) {}

	bool operator()(char c) const
	{
		// c �� data �ȿ� �ִ��� Ȯ�� �Ѵ�
		return data.find(c) != std::string::npos;
	}	
};






int main()
{
	std::vector<std::string> v;
	std::ifstream f("3_���������̳�6.cpp"); // ���� �����̸�

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


