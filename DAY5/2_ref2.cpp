#include <iostream>
#include <functional>

// C++ 표준의 reference_wrapper 아주 간단한 도구 입니다.
template<typename T>
class reference_wrapper
{
	T* pobj;
public:
	reference_wrapper(T& obj) : pobj(&obj) {}

	// "raw reference" 로의 변환을 위한 변환 연산자
	operator T& () { return *pobj; }
};

int main()
{
	int n1 = 10;
	int n2 = 20;

	reference_wrapper<int> r1 = n1;
	reference_wrapper<int> r2 = n2;

	// "raw reference" 와의 호환도 필요 합니다.
	int& r3 = r1; // r1.operator int&() 라는 변환 연산자 필요

	r1 = r2;	

	std::cout << n1 << std::endl;
	std::cout << n2 << std::endl;
	std::cout << r1 << std::endl;
	std::cout << r2 << std::endl;
}

