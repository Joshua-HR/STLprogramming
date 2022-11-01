#include <iostream>
#include <vector>
#include <algorithm>
#include "show.h"

int main()
{
	std::vector<int> v1 = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> v2 = { 0,0,0,0,0,0,0,0,0,0 };


	// 1. �˰����� �⺻ ����(inplace ����)
//	auto p1 = std::remove(v1.begin(), v1.end(), 3);
						// v1 : 1,2,4,5,6,7,8,9,10,10

	// 2. �˰����� ������ ����
//	auto p2 = std::remove_if(v1.begin(), v1.end(), 
//							[](int n) {return n % 2 == 0; });
						// v1 : 1, 3, 5, 7, 9, 6,7,8,9,10

	// 3. �˰����� ���� ����
	// ��ȯ�� "p1" �� v2�� �ݺ��� �Դϴ�.
	// "copy" �� "remove" �ص� ������ ȿ���� ���� ������(2���� ��ȯ)
	// => remove_copy() �� ����ϸ� �ѹ��� ��ȯ���� ���������մϴ�.
	//    ��, 2�� �������ϴ�.
//	auto p3 = std::remove_copy(v1.begin(), v1.end(), v2.begin(), 3);
						// v1 : 1,2,3,4,5,6,7,8,9,10
						// v2 : 1,2,4,5,6,7,8,9,10, 0

	// ���� : �Ʒ� �Լ��� ������� ? �����ϴ�.
	// �Ʒ�ó�� �ϰ� ������
	// 1. v1 �� v2�� copy �Ŀ�
	// 2. v2 �� sort �ϸ� �˴ϴ�.
	// std::sort_copy(v1.begin(), v1.end(), v2.begin());

	// 4. ���� ������ ����
	auto p4 = std::remove_copy_if(v1.begin(), v1.end(), 
								  v2.begin(), 
								  [](int n) { return n % 2 == 0; });


	show(v1);
	show(v2);
}
