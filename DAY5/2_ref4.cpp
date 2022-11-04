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

	std::reference_wrapper<int> r1 = n;

	forward_by_value(foo, r1); 



	std::cout << n << std::endl;
}
