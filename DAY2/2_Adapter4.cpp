#include <iostream>
#include <list>
#include <algorithm>
#include "show.h"

int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7,3,9,10 };

	// �����̳ʿ��� ������ �ݺ��ڴ� "4����"�� ������ �ֽ��ϴ�.
	// 1. ������ �Լ� �˾� �μ���
	// 2. �ݺ��� Ÿ�� �˾� �μ���( ��, �Ϲ������δ� auto ����ϼ���)
	// 3. �Ϲ� �Լ� ������ ��� �����˴ϴ�.

	std::list<int>::iterator p1 = s.begin();  // ������ �ݺ���
								// std::begin(s);

	std::list<int>::reverse_iterator p2 = s.rbegin(); // ������ �ݺ���
								// std::rbegin(s);
						
	std::list<int>::const_iterator p3 = s.cbegin();  // ��� �ݺ���
								// std::cbegin(s);
	int n = *p3; //ok
	*p3 = 3; // error. ��� �ݺ��� �̹Ƿ�

	std::list<int>::const_reverse_iterator p3 = s.crbegin();
								// std::crbegin(s);

}






