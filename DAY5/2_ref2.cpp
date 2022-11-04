#include <iostream>
#include <functional>

// reference_wrapper 핵심
// 1. 객체의 주소를 보관하고 있습니다.
// 2. raw reference 로 변환 가능합니다.
// 3. 복사 및 대입은 디폴트 버전 사용!!


// C++20 에서 "std::ref_view" 가 추가되는데.. 
// => reference_wrapper 를 발전 시킨 개념입니다.


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

