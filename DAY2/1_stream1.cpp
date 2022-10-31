#include <iostream>
#include <iterator>
#include <list>

int main()
{
	int n = 10;

	// 화면 출력하는 방법
	// 1. std::cout 또는 printf 사용
	std::cout << n << std::endl;


	// 2. ostream_iterator 를 사용하는 방법

	std::ostream_iterator<int> p(std::cout, " ");
	
	*p = 10; // std::cout << 10 << " "; 가 같은 코드





	std::list<int> s = { 1,2,3 };
}

