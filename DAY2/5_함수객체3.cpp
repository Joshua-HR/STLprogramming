#include <iostream>


// �Լ� ��ü�� ���� 1. 
// => �Լ� ��ü�� ���� �� �ƴ϶� ���µ� ������ �ֽ��ϴ�.
// => ��� ����Ÿ�� �ִٴ� �ǹ�.

class URandom
{
	// ��� ����Ÿ!!
public:
	int operator()()
	{
		// ���⼭ ������ ����Ÿ�� ��� ����Ÿ�� ���� ����.. 
		return rand() % 10;
	}
};

URandom urand;	// urand �� ��ü���� () �����ڰ� ������ �Ǿ� �����Ƿ�
				// �Լ� ó�� ��밡���մϴ�.

int main()
{
	for (int i = 0; i < 10; i++)
		std::cout << urand() << std::endl;
}





