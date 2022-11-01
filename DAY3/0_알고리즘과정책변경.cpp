#include <iostream>
#include <vector>
#include <functional>
#include <algorithm> // find,sort, reverse, replace ���� �˰���
#include <numeric>	 // accumulate ���� ��ġ �˰���

int main()
{
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	// std::accumulate : �־��� ������ ���� ���ϴ� �˰���
	int n = std::accumulate(v.begin(), v.end(), 0);

	std::cout << n << std::endl; // 55


	// ��ġ �˰������ "����"�� �����Ҽ� �ֽ��ϴ�.
	// => ������ ���ڷ� ���� �Լ��� �����ؼ� 2����ҿ� � ������ ���� ���氡��
	int n1 = std::accumulate(v.begin(), v.end(), 1, 
							[](int a, int b) { return a * b; });

	std::cout << n1 << std::endl; // 3,628,800

	// C++11 �������� ���� ǥ������ �������ϴ�.
	// �׷��� <functional> ����� ��Ģ ������ ���� �Լ���ü�� �����˴ϴ�.
	std::plus<int> f1;
	std::minus<int> f2;
	std::multiplies<int> f3;
	std::divides<int> f4;

	int n3 = f3(3, 4); // 3 * 4

	int n4 = std::accumulate(v.begin(), v.end(), 1,
										std::multiplies<int>());

	std::cout << n4 << std::endl;

}
