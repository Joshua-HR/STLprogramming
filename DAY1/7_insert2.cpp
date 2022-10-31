// insert2.cpp
#include <iostream>
#include <algorithm>
#include <list>

// �Լ� ����

int main(int argc, char** argv)
{
	std::list<int> s1 = { 10,20,30,40,50 };
	std::list<int> s2 = { 1, 2, 3, 4, 5 };

	
	// �Ʒ� �ڵ�� s1 => s2 �� ����� �ڵ� �Դϴ�.
	// std::copy( s1.begin(), s1.end(), s2.begin()); 

	// �ٽ� : s1�� ��� ������ s2 �� �߰� �Ϸ���
	// ��� 1. �ݺ��� �� push_back ���
	/*
	auto p1 = s1.begin();

	while (p1 != s1.end())
	{
		s2.push_back(*p1);
		++p1;
	}
	*/

	// ��� 2. ���� �ݺ��� ���. �ݺ��� ��ü�� ���� ����
//	std::back_insert_iterator< std::list<int> > p2(s2);

//	std::copy(s1.begin(), s1.end(), p2); 


	// ��� 3. ���� �ݺ��ڸ� ���� ������ ����, 
	//        ���� �ݺ��ڸ� ����� �Լ� ���
	std::copy(s1.begin(), s1.end(), std::back_inserter(s2));


	for (auto& n : s2)
		std::cout << n << std::endl; 

	// �Ʒ� 2�� ������ �ݵ�� ����ϼ���
	std::copy(s1.begin(), s1.end(), s2.begin());  // s1 => s2 �����
	std::copy(s1.begin(), s1.end(), std::back_inserter(s2));
												// s1 => s2 ���� �߰�

}
