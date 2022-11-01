#include <iostream>
#include <bitset>  // bit 관리를 위한 STL 클래스

class URandom
{
	std::bitset<10> bs;
	bool recycle;
public:
	URandom(bool b = false) : recycle(b) 
	{
		//bs.set(5);// 5번째 비트를 1로
		bs.set();	// 모든  비트를 1로
	}	
	int operator()()
	{
		if (bs.none()) // 모두 0 이면 더이상 중복되지 않은 난수가 없다
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





