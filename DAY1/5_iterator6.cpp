#include <iostream>
#include <list>
#include <algorithm>

int main()
{
	std::list<int> s1 = { 1,2,3,4,5 };
	std::list<int> s2 = { 0,0,0,0,0 };

	// s1 �� �ִ� ��� ��Ҹ� s2�� ���� �ϰ� �ʹ�.

	// ��� 1. C++11 �� ���ο� for �� ���
	/*
	int i = 0;
	for (auto e : s1)
	{
		s2[i++] = e;  // [] ������ vector �� �Ǵµ� 
					  // list �� �ȵ˴ϴ�.
	}
	*/

	// ��� 2. �ݺ��ڸ� ������ �ݺ��� ���
	auto p1 = s1.begin();
	auto p2 = s2.begin();

	while (p2 != s2.end())
	{
		*p2 = *p1;
		++p2;
		++p1;
	}

	// ��� 3. �� ���2�� �ڵ带 ������ �Լ��� std::copy �Դϴ�.
	std::copy(s1.begin(), s1.end(), // �� ������ ��� ��Ҹ�
			  s2.begin());          // �� �������� ������ �޶�


}