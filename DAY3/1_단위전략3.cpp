#include <vector>
#include <iostream>

int main()
{
	// vector 사용시 메모리 할당기 변경하기.
	std::vector<int, debug_alloc<int> > v;

	std::cout << "===========" << std::endl;
	
	v.resize(5);
	std::cout << "===========" << std::endl;
	
	v.resize(10);
	std::cout << "===========" << std::endl;
}