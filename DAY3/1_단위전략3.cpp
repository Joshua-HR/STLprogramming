#include <vector>
#include <iostream>

int main()
{
	// vector ���� �޸� �Ҵ�� �����ϱ�.
	std::vector<int, debug_alloc<int> > v;

	std::cout << "===========" << std::endl;
	
	v.resize(5);
	std::cout << "===========" << std::endl;
	
	v.resize(10);
	std::cout << "===========" << std::endl;
}