// 6_람다표현식4
#include <iostream>

// 어떤 함수가 인자로 함수를 받으려고 합니다.

// 1. 함수 포인터로 받기
void f1(int(*f)(int, int))
{
	f(1, 2);
}

// 2. 템플릿으로 받기
template<typename T>
void f2(T f)
{
	f(1, 2);
}

int main()
{
	f1( [](int a, int b) {return a + b; } );
	f2( [](int a, int b) {return a + b; } );
}