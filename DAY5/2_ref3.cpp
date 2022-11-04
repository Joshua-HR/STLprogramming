#include <iostream>

void foo(int& a) { a = 200; }

template<typename F, typename T> 
void forward_by_value(F f, T arg)
{
	f(arg);
}

int main()
{
	int n = 10;

//	foo(n);	// 이렇게 전달하면 n 은 200으로 변경

//	forward_by_value(foo, n); // foo 에 n 을 전달해 달라.
							  // n 이 200으로 변경되지 않고 복사본이 변경
	
	// 1. "forward_by_value" 를 통해서 n 자체를 foo 에 보내려면
	// => 주소를 보내야 합니다.
	forward_by_value(foo, &n);
				// => forward_by_value 에 복사본이 아닌 주소 전달은 성공
				// => 그런데, foo(int& arg) 에 주소를 보낼수 없으므로 실패
				
	std::cout << n << std::endl; 
}
