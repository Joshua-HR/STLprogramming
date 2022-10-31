#include <iostream>

// 4. 보다 유연하게 - 약간 어렵습니다.

// 템플릿을 아래 처럼 만들면 2개의 문제가 있습니다
// 
// 1. 구간의 타입과 검색하는 요소의 타입이 연관됩니다.
//    => double 배열에서는 double 값만 검색 가능합니다.
//       double 배열에서는 int 값 검색 안됩니다.

// 2. T* 라고 적으면 "raw pointer" 만 가능합니다
//    스마트 포인터 같은 "포인터와 유사한 객체"는 사용할수 없습니다.

//template<typename T> T* find(T* first, T* last, T c)


template<typename T1, typename T2>
T1 find(T1 first, T1 last, T2 c)
{
	while (first != last && *first != c)
		++first;

	return first == last ? nullptr : first;
}




int main()
{
	double x[10] = { 1,2,3,4,5,6,7,8,9,10 };

//	double* p = find<double>(x, x + 10, 3); // ok

	double* p = find(x, x + 10, 3); // error


	if (p == nullptr)
		std::cout << "not found" << std::endl;
	else
		std::cout << "found : " << *p << std::endl;
}