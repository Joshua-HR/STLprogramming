#include <iostream>
#include <iterator>
#include <list>

int main()
{
	int n = 10;

	// ȭ�� ����ϴ� ���
	// 1. std::cout �Ǵ� printf ���
	std::cout << n << std::endl;


	// 2. ostream_iterator �� ����ϴ� ���

	std::ostream_iterator<int> p(std::cout, " ");
	
	*p = 10; // std::cout << 10 << " "; �� ���� �ڵ�





	std::list<int> s = { 1,2,3 };
}

