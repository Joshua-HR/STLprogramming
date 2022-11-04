#include <iostream>
#include <functional>

// C++ reference :  이동 불가능한 reference 입니다.
//					대입 연산시 값의 이동입니다.
//					reference 자체는 상수 입니다

int main()
{
	int n1 = 10;
	int n2 = 20;

//	int& r1 = n1;  
//	int& r2 = n2;

	// C++11 에서 추가된 "이동 가능한 참조"
	std::reference_wrapper<int> r1 = n1;
	std::reference_wrapper<int> r2 = n2;

	r1 = r2;	// 이순간의 동작 방식을 생각해 보세요

	// 결과 예측해 보세요				// int&		reference_wrapper
	std::cout << n1 << std::endl;	// 20		10
	std::cout << n2 << std::endl;	// 20		20
	std::cout << r1 << std::endl;	// 20		20
	std::cout << r2 << std::endl;	// 20		20
}

