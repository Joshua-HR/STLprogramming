// 5_string_view
#include <iostream>
#include <string>
#include <string_view> 

int main()
{
	// 핵심 1. string 의 원리.
	// SSO : small string optimization - C++11
	// 문자열의 길이가 긴(보통 16자) 경우만 힙에 문자열 보관
	// 짦은 문자열은 객체 자체에 보관
	std::string s1 = "to be or no to be";
	std::string s2 = "hello";
	//===========================================


	std::string s = "to be or no to be"; 

	// 핵심 2. C++17 의 string_view
	// => 아래 2줄의 차이점이 핵심
	std::string		 st = s; // 깊은 복사. 문자열 자체를 복사 합니다.
	std::string_view sv = s; // s가 가진 문자열을 가리킵니다.     

	// string_view 의 크기는
	// "포인터 크기" + "문자열 길이 관리"
	std::cout << sizeof(sv) << std::endl; // 32bit 8

	// 주의 string_view 는 읽기만 가능합니다.
	//sv[0] = 'a'; // error
	char c = sv[0]; // ok





	// 핵심 2. 아래 2줄의 차이점.
	std::string		 st2 = "to be or no to be";
	std::string_view sv2 = "to be or no to be";
}