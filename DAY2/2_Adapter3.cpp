#include <iostream>
#include <list>
#include <algorithm>
#include "show.h"

int main()
{
	std::list<int> s1 = { 1,2,3,4,5,6,7,3,9,10 };
	std::list<int> s2 = { 0,0,0,0,0,0,0,0,0,0 };

	// s1 ���� 3 �� ã�� �ʹ�.
	auto ret1 = std::find(s1.begin(), s1.end(), 3);

	// s1 ���� 3 �� ã�� �ʹ�. ��, �ڿ��� ���� ã�� �ʹ�.
//	auto ret2 = std::find(s1.end(), s1.begin(), 3); // �ȵ˴ϴ�.
	auto ret2 = std::find(s1.rbegin(), s1.rend(), 3); // ok

	// ���ݺ��� ���п� "��� �˰���"�� �Ųٷε� ���� �մϴ�.


	// std::copy �� ����ؼ� s1�� ��� ������ s2�� �����غ�����
	// ��, �Ųٷ� ������ ������..

//	std::copy(s1.begin(), s1.end(), s2.begin() ); // �״�� ����
//	std::copy(s1.rbegin(), s1.rend(), s2.begin()); // �Ųٷ� ����
	std::copy(s1.begin(), s1.end(), s2.rbegin()); // �Ųٷ� ����

	show(s2); // 10, 9, 3, 7, 6,5,4,3,2,1  ���;� �մϴ�.


}






