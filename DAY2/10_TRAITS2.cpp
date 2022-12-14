#include <iostream>
#include <list>


template<typename T>
typename T::value_type sum(T first, T last)
{
	// 현재 "T = int*" 입니다. 
	// 그런데, int* 안에는 value_type 이 없습니다!!
	typename T::value_type s = 0; // error

	while (first != last)
	{
		s = s + *first;
		++first;
	}
	return s;
}

int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	// 반복자 : "반복자 처럼 동작하는 모든 것은 반복자" 이다.
	//         ++로 이동 가능하고 *로 요소 접근 가능한것
	//         raw pointer 도 반복자 이다.
	int n2 = sum(x, x + 10);

	std::cout << n2 << std::endl;
}