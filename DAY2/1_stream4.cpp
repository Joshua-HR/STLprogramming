#include <iostream>
#include <iterator>
#include <list>
#include <fstream> // C++ 파일 입출력 헤더.

int main()
{
	// 표준 입력 버퍼에서 입력 받는 반복자
//	std::istream_iterator<int> p1(std::cin);


	std::ifstream fin("1_stream4.cpp"); // 현재 소스 이름넣으세요

	std::istream_iterator<char> p2(fin);

	char n = *p2; // 파일에서 한문자 입력 받기


	std::cout << n << std::endl; // "#"
}

