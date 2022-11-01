#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> v = { 1,9,3,4 };

	// �־��� �������� "3�� ���"�� ã�� �ʹ�.

	auto ret1 = std::find_if(v.begin(), v.end(), 
							[](int n) { return n % 3 == 0; });

	int k = 3;

	// �־��� �������� "k�� ���"�� ã�� �ʹ�.
	// => ���� ǥ������ "Ŭ����" �Դϴ�. ( �������� ĸ�� ����� �ִٴ°�)
	// => [] �ȿ� ĸ���� ���������� ������ �˴ϴ�. [a, b, c]
	auto ret2 = std::find_if(v.begin(), v.end(),
							[k](int n) { return n % k == 0; });

}