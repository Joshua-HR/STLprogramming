#include <iostream>

// find 알고리즘 정리

// 검색 구간 : 임의 타입의 배열의 [first, last) 구간에서 선형검색
//	          last 는 검색 대상 아님.
// 
// 구간의 이동 : 전위형 ++ 연산자

// 구간의 표현 : 포인터와 유사하게 동작하는 객체(반드시 포인터일 필요없음)
//             ++, *, ==, != 의 연산이 가능해야 함.
// 실패시 반환값 : last

// 1,2번째 인자 : 포인터 또는 포인터와 유사 객체 
//				=> 크기가 크지 않다.  call by value
// 
// 3번째 인자 : 임의 타입의 객체 - const reference 사용

// 아래 find 가 이미 C++ 표준에 있습니다. <algorithm> 헤더!!
template<typename T1, typename T2>
T1 find(T1 first, T1 last, const T2& c)
{
	while (first != last && *first != c)
		++first;

	return first;
}




int main()
{
	double x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	double* p = find(x, x + 3, 5);

	if (p == x + 3)
		std::cout << "not found" << std::endl;
	else
		std::cout << "found : " << *p << std::endl;
}