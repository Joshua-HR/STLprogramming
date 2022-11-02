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
	v.insert(p, 30); // �߰� ����
					 // p �� ����Ű�� ��� �տ� 30 �ֱ�

//	v.push_front(10); // vector �� �ȵ�
	v.push_back(20);  // ���� �߰� �Ǹ鼭 ���۰� ����˴ϴ�.
					  // ������ ���� ���Ҵ� �ݺ��ڴ� ��ȿȭ �˴ϴ�.

//	v.insert(p, 30); // ����!!! �� �ڵ� ������ �ݺ��� ��ȿȭ �߻�.

	

	// ���� : vector �� push_front �� ������
	//			insert �� �տ� ������ �ֱ� �մϴ�.
	v.insert(v.begin(), 100); // ok.. ������ �����ϴ�.
							  // �ǵ��� ������� ������

	show(v); // 100, 1,2,3,4,30,5,6,7,8,9,10,20
	//=============================================



	// 2. ����


	// 3. ��� ����

}