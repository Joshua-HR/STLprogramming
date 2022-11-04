#include <iostream>
#include <type_traits>

// traits 의 종류
// 1. 타입 질의    : std:is_xxx<T>::value
// 2. 변형 타입얻기 : 아래 코드 참고

template<typename T> void foo(const T& b)
{

	typename std::remove_pointer<T>::type n;

	std::cout << typeid(n).name() << std::endl;
}

int main()
{
	int n = 10;

	foo(&n);
	foo(n);

}

