#include <iostream>
#include <list>   
#include <vector>

int main()
{
//	std::list<int>   s = { 1,2,3,4,5 };
//	std::vector<int> s = { 1,2,3,4,5 };
	int s[5] = { 1,2,3,4,5 };



	// �ٽ� 1. �ݺ��� Ÿ��
	// ���� 1. �ڵ尡 ������ ���Դϴ�.
	// ���� 2. �����̳� ����� �ݺ��� Ÿ�Ե� �����ؾ� �մϴ�.
//	std::list<int>::iterator p1 = s.begin();


	// C++11 ���� ��� �Ʒ� ó�� ����ϼ���. ����.
	auto p2 = s.begin();


	// �ٽ� 2. �ݺ��ڸ� ������ ��
//	auto p3 = s.begin();	// 1. ��� �Լ� begin ���
							// ���� : s �� "raw array" �� ��� error

	auto p4 = std::begin(s); // 2. �Ϲ� �Լ� begin() ���
							// s �� "raw array" �� ��쵵 ����..
							// �� ��� p4 �� "int* p4"
}



