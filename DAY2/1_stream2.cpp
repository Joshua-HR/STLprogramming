#include <iostream>
#include <iterator>
#include <list>
#include <fstream> // C++ 파일 입출력 헤더.

int main()
{
	std::ostream_iterator<int> p1(std::cout, " ");

	*p1 = 10;


	std::ofstream fout("a.txt"); // 출력 파일을 위한 C++ 객체

	std::ostream_iterator<int> p2(fout, " ");
	*p2 = 10;
	*p3 = 20; // "10 20" 이 "a.txt" 로 출력
}

