#include <iostream>
#include <bitset>  // bit ������ ���� STL Ŭ����

class URandom
{
	std::bitset<10> bs;
	bool recycle;
public:
	URandom(bool b = false) : recycle(b) 
	{
		//bs.set(5);// 5��° ��Ʈ�� 1��
		bs.set();	// ���  ��Ʈ�� 1��
	}	
	int operator()()
	{
		if (bs.none()) // ��� 0 �̸� ���̻� �ߺ����� ���� ������ ����
		{
			if (recycle == true)
				bs.set();
			else
				return -1;
		}
		int k = -1;
		while ( !bs.test(k = rand() % 10) );
		bs.reset(k);

		return k;
	}
};

//URandom urand;	
URandom urand(true);



int main()
{
	for (int i = 0; i < 15; i++)
		std::cout << urand() << std::endl;
}





