#include <iostream>
#include <vector>
#include <algorithm>

bool fn(int n) { return n % 3 == 0; }

int main()
{
	std::vector<int> v = { 1,2,9,3,4,5,6,7,8 };


	// �־��� �������� "3�� ���"�� ã��ʹ�.
	// => 3��° ���ڷ� "���� ������ ����"
	auto ret1 = std::find_if(v.begin(), v.end(), fn);


	int k;
	std::cin >> k;

	// �־��� �������� ó�� ������ "k�� ���"�� ã�� �ʹ�.
	auto ret2 = std::find_if(v.begin(), v.end(), ?? );

}