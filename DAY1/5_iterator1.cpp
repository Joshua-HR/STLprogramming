// iterator1.cpp
#include <iostream>
#include <list>

int main()
{
	int x[5] = { 1,2,3,4,5 };

	// �迭�� 1��° ��Ҹ� ����Ű�� �����͸� ������
	// ��� ��Ҹ� ���� �����մϴ�.
	int* p = x;
	*p; 
	++p;


	std::list<int> s = { 1,2,3,4,5 };

	// STL �����̳ʴ� ��Ҹ� ����Ű�� �ݺ��ڸ� ������
	// ��� ��Ҹ� ���� �����մϴ�.
	std::list<int>::iterator p2 = s.begin();
	*p2; 
	++p2;
}










