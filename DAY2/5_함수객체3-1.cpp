#include <iostream>
#include <bitset>  // bit ������ ���� STL Ŭ����

class URandom
{
	std::bitset<10> bs;
	bool recycle;
public:
	URandom(bool b = false) : recycle(b) {}


	int operator()()
	{
		return rand() % 10;
	}
};






URandom urand;	

int main()
{
	for (int i = 0; i < 10; i++)
		std::cout << urand() << std::endl;
}





