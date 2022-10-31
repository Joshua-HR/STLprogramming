#include <iostream>
#include <iterator>
#include <list>
#include <fstream> // C++ 파일 입출력 헤더.

int main()
{
	// 1. 출력 스트림 반복자
	std::ostream_iterator<int> p1(std::cout, " ");

	*p1 = 10; // std::cout << 10 << " ";


	// 2. 입력 스트림 반복자
	std::istream_iterator<int> p2(std::cin);

	int n = *p2; // std::cin >> n  의 의미 입니다.

	*p1 = n;     // std::cout << n << " "
}

