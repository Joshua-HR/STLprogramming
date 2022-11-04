#include <iostream>

// 아래 코드가 T가 포인터 인지 조사하는 코드입니다.
template<typename T> struct is_pointer
{
	enum { value = false };
};

// template 부분 특수화 라는 문법. 
// 특정 조건을 만족할때 구현을 변경하겠다는 문법.
template<typename T> struct is_pointer<T*>
{
	enum { value = true };
};

template<typename T> void foo(const T& b)
{
	// T : int, int*
	if (is_pointer<T>::value)
		std::cout << "포인터" << std::endl;
	else
		std::cout << "포인터 아님" << std::endl;
}
int main()
{
	int n = 10;
	foo(n);
	foo(&n);
}

