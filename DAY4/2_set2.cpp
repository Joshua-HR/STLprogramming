#include <iostream>
#include "show.h"

#include <set> 
#include <functional>

int main()
{
	// �ٽ� 1. set �� template ����
	std::set<int> s;
//	std::set<int, std::less<int>, std::allocator<int> > s;
//	std::set<int, std::greater<int> > s;

	s.insert(20);
	s.insert(30);
	s.insert(15);
	s.insert(5);
	s.insert(40);
	s.insert(25);

	// �ٽ� 2. set �� �ߺ��� ������� �ʽ��ϴ�.
	// insert ��ȯ Ÿ�� : pair<�ݺ���, bool> 
	
//	std::pair< std::set<int>::iterator, bool> ret = s.insert(15);

	auto ret = s.insert(15);

	if (ret.second == false)
	{
		std::cout << "�Է� ����, �̹� ���� �ֽ��ϴ�." << std::endl;
		std::cout << *(ret.first) << std::endl;
	}




	auto p = s.begin();

	while (p != s.end())
	{
		std::cout << *p << std::endl;

		++p; 
	}

}







