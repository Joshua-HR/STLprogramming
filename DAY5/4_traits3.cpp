// traits3    1번 복사해오세요
#include <iostream>
#include <type_traits>

template<typename T> 
void printv(const T& v)
{
//	if ( std::is_pointer<T>::value )

	// if constexpr : 컴파일 시간 제어문 ( C++17)
	//				조건이 false 라면 
	//				"템플릿" => "C++ 코드" 생성 안됨
	if constexpr (std::is_pointer<T>::value)
		std::cout << v << " : " << *v << std::endl;
	else
		std::cout << v << std::endl;
}


int main()
{
	int n = 10;

	printv(&n);// ok

	printv(n); // 이코드가 있으면 error
}

