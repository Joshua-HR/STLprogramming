#include <vector>
#include <iostream>
#include <algorithm>
#include "show.h"

// vector ��� �Լ� ����

int main()
{
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	auto p = std::find(v.begin(), v.end(), 5);

	// 1. ����
//	v.push_front(10); // vector �� �ȵ�
	v.push_back(20);

	v.insert(p, 30); // p �� ����Ű�� ��� �տ� 30 �ֱ�

	show(v); // 1,2,3,4,30,5,6,7,8,9,10,20


	// 2. ����


	// 3. ��� ����

}