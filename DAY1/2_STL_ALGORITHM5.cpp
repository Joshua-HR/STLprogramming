#include <iostream>

// 5. 검색 실패시 반환 값
// => 0 대신 last 반환
// 장점 1. find 함수가 빨라진다.
//     2. last 는 다음 검색구간의 시작을 의미 하게 된다.

template<typename T1, typename T2>
T1 find(T1 first, T1 last, T2 c)
{
	while (first != last && *first != c)
		++first;

	return first;// == last; ? nullptr : first;
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