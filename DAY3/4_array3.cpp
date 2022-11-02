#include <iostream>
#include <algorithm>
#include <array>	 // C++11 ���� �߰��� �����̳�

int main()
{
	std::array<int, 5> arr = { 1,2,3,4,5 };

	// 1. �迭ó�� ����ϼ���
	arr[0] = 10;

	int n1 = arr.front();
	int n2 = arr.back();

	std::array<int, 5>::size_type sz = arr.size();

	// 2. �ٸ� �����̳�ó�� �ݺ��ڵ� ��밡��
	auto p1 = arr.begin();
	auto p2 = arr.end();

	// �ٽ� : array �� "raw array" �� ���ٴ� ���� �� ����ϼ���
	arr.push_back(10);
	arr.resize(20);
	arr.insert(arr.begin(), 3);
}