#include <iostream>
#include <iterator>
#include <list>
#include <fstream> // C++ 파일 입출력 헤더.

int main()
{
	std::ifstream fin("1_stream5.cpp"); 

	// std::istream_iterator : white space(space, tab, enter)무시
//	std::istream_iterator<char> p1(fin);
//	std::istream_iterator<char> p2;     // 생성자 인자를 전달하지 않으면
										// EOF 입니다.

	// std::istreambuf_iterator : white space 를 입력에 포함
	std::istreambuf_iterator<char> p1(fin);
	std::istreambuf_iterator<char> p2;

	std::ostream_iterator<char> p3(std::cout, "");

	
	// 아래 한줄의 의미를 생각해 보세요
	std::copy(p1, p2, p3);
}

