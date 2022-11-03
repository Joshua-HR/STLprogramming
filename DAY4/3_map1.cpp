#include <map>  
#include "show.h"

// map : pair �� �����ϴ� set,   
//       key ������ value �� ����

int main()
{
	std::map<std::string, std::string> m;

	// ��� �ֱ�
	// 1. pair ���� �ֱ�
	std::pair<std::string, std::string> p1("mon", "������");

	m.insert(p1);

	// 2. make_pair
	m.insert(std::make_pair("tue", "ȭ����"));

	// 3. emplace - ����� ����Ÿ�Կ��� ���ϴ�.
	m.emplace("wed", "������");

	// 4. [] ������ ��� - �� ����� �θ� ���˴ϴ�.
	m["thu"] = "�����";


	//------------------------
	
	// �ݺ��ڿ� ���ؼ�
	auto p = m.find("wed"); // find(Ű��)

	// p�� ����ؼ� "wed : ������" �̶�� ����غ�����

	// [] ������
	std::cout << m["sun"] << std::endl; 
}




