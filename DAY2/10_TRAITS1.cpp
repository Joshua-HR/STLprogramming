#include <iostream>
#include <list>

// 아래 소스의 핵심 
// typename T::value_type : 반복자 T가 가리키는 요소의 타입

// sum 의 반환 타입을 표기하는 것을 알아 두세요.

template<typename T> 
typename T::value_type sum(T first, T last)
{
	// T : 반복자 타입
	// typename T::value_type : 반복자가 가리키는 요소의 타입
	typename T::value_type s = 0;

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

	int n = sum(s.begin(), s.end());	// 목표!!!

	std::cout << n << std::endl; // 55
}