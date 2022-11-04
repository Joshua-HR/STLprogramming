#include <iostream>

// 아래 코드가 T가 포인터 인지 조사하는 코드입니다.
template<typename T> struct is_pointer
{
	enum { value = false };
};

template<typename T> void foo(const T& b)
{
	if ( is_pointer<T>::value  )
		std::cout << "포인터" << std::endl;
	else
		std::cout << "포인터 아님" << std::endl;

}

int main()
{
	int n = 10;

	printv(n);
	printv(&n);
}

