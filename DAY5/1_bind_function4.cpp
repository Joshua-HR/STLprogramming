#include <iostream>
#include <functional>
using namespace std::placeholders;

void foo(int a, int& b) { b = 100; }

int main()
{	
	std::function<void(int)> f;
	
	int n = 0;

	// -------------------------------------------
//	f = std::bind(&foo, _1, n);  // 이 한줄을 생각 해 봅시다.
								 // => n이 가진 값 0 으로 인자를 고정한다.
							
	f = std::bind(&foo, _1, std::ref(n));// n 자체를 인자로 고정한다

	f(0);	//	 foo(0, n)


	std::cout << n << std::endl; // 결과 예측해 보세요
}


