#include <vector>
#include <list>
#include <iostream>
#include <algorithm>
#include "show.h"

// �����̳ʸ� �����ϴ� �����̳�

int main()
{
	std::vector<int> v1(10, 0);

	v1[0] = 10;


	// �����̳ʿ� �����̳ʸ� �����ϸ� �پ��� �ڷᱸ���� ����� �ֽ��ϴ�.

	std::vector< std::vector<int> > v2(10);

	v2[0][0] = 10; // runtime error. ��Ұ� ũ�Ⱑ 0�� vector�̹Ƿ�


	std::vector< std::vector<int> > v3(10, std::vector<int>(10) );

	v3[0][0] = 10; // ok.. v3 �� 10 * 10 �� matrix



	std::vector<std::list<int>> v4(10);

	v4[0].push_back(1);
	v4[0].push_back(2);
	v4[0].push_back(3);

	v4[1].push_back(10);
	v4[1].push_back(20);
	
}