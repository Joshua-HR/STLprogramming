#include <iostream>
#include <list>

template<typename InputIter> 
? sum(InputIter first, InputIter last)
{
	? s = 0;

	while (first != last)
	{
		s = s + *first;
		++first;
	}
	return s;
}

int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };

	int n = sum(s.begin(), s.end());	// ��ǥ!!!

	std::cout << n << std::endl; // 55
}