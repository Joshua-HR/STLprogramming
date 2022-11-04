#include <iostream>
#include <functional>

void foo(int& a) { a = 200; }

template<typename F, typename T>
void forward_by_value(F f, T arg)
{
	f(arg);
}

int main()
{
	int n = 10;

	// 방법 1. reference_wrapper  객체를 생성후 전달
//	std::reference_wrapper<int> r1 = n;
//	forward_by_value(foo, r1);

	// 방법 2. 임시객체형태로 전달
//	forward_by_value(foo, std::reference_wrapper<int>(n));

	// 방법 3. reference_wrapper 객체를 만드는 함수를 사용
	forward_by_value(foo, std::ref(n));
						// ref : reference_wrapper 를 만드는 함수

	std::cout << n << std::endl;

	//========================================================
	std::function<void()> f1 = std::bind(&foo, n); // 값으로 고정
	std::function<void()> f2 = std::bind(&foo, std::ref(n)); 
										// 참조로 고정
										// 정확히는 주소를 보관하는
										// reference_wrapper 로 고정
}
