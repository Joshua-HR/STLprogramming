// 4_�˰�����Լ�3   "3_algo1-1.cpp" ����
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include "show.h"

bool foo(int n) { return  n != 0 && n % 3 == 0 ; }


int main()
{
	std::vector<int> v = { 1,9,3,1,2,3,1,2,3,1 };


	// �Ʒ� �ڵ��� ����� Ȯ���� ������
	// => v�� ��� ��ҿ� ���ؼ� "1" �� "0" ���� ����
	std::replace(v.begin(), v.end(), 1, 0);

	show(v); // 0,9,3,0,2,3,0,2,3,0



	// �� �ڵ� ����� �����ؼ� �Ʒ� �ڵ� ����� ������
	// v ���� ��� ����߿��� "3�� ����� -1��" ����� ������
	
//	std::replace_if(v.begin(), v.end(), ������, �����Ұ� ); 

//	std::replace_if(v.begin(), v.end(), foo, -1);

	std::replace_if(v.begin(), v.end(), 
				[](int n) { return  n != 0 && n % 3 == 0; }, 
				-1);

	
	show(v); // 0,-1,-1,0,2,-1,0,2,-1,0
}




// 1. �Լ��� �ܺο� ���� �غ��ð�..
// 2. "���� ǥ����"���ε� �غ�����.


