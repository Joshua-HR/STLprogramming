// 5_�Լ���ü10
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional> // std::less<>, std::greater<> ���� �Լ���ü����
#include "show.h"

inline bool cmp1(int a, int b) { return a < b; }

int main()
{
	std::vector<int> v = { 1,3,5,7,9,2,4,6,8,10 };


	// std::sort() ����ϱ� 
	// ��� 1. �� ��å�� �������� ������ 
	// => ���� ���� �Դϴ�.
	std::sort( v.begin(), v.end() ); //  1,2,3,4,5,6,7,8,9


	// ��� 2. 3��° ���ڷ� �� ��å�� ���� �Լ� ����
	// => cmp1 �Լ��� �ζ��� ġȯ �ȵ�
	// => 2�� ��� �񱳰� �ʿ��Ҷ� ���� cmp1 ��� ȣ��
	// => ����Ÿ ���� ���� ���� ������ ���� ����.
	std::sort(v.begin(), v.end(), cmp1);



	// ��� 3. �� ��å �Լ��� �Լ� ��ü ���
	// => �Լ� ��ü�� () �����ڰ� �ζ��� ġȯ ���� 
	std::less<int> f;

	std::sort(v.begin(), v.end(), f); 
	std::sort(v.begin(), v.end(), std::less<int>() );	// ���� ����
	std::sort(v.begin(), v.end(), std::greater<int>());	// ���� ����
					// => �ѹ��� ����Ҷ��� �̷��� �ӽð�ü�� �����ϸ� �˴ϴ�.
	

	// ��� 4. C++11 ���� ���ʹ� "����ǥ����" ����

	std::sort(v.begin(), v.end(), [](int a, int b) { return a < b; });


}

