// 3_algo1-1
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main()
{
	std::vector<int> v = { 1,2,3,1,2,3,1,2,3,1 };

	// 1. ��κ��� �˰����� ���ڷ� "�ݺ���"�� �ް� �˴ϴ�.
	// 2. ��ȯ ���� �ݺ����� ��찡 �����ϴ�.
	// 3. find �� �˻� ���н� 0 �� �ƴ� last �� ��ȯ �մϴ�.

	auto p = std::find(v.begin(), v.end(), 3);

	if (p == v.end())
		std::cout << "�˻� ����" << std::endl;
	else
		std::cout << "�˻� ���� : " << *p << std::endl;


	return 0;
}

