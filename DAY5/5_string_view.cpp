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
	std::string		 st = s;
	std::string_view sv = s;      

	std::cout << sizeof(sv) << std::endl; // 8



	// 핵심 2. 아래 2줄의 차이점.
	std::string		 st2 = "to be or no to be";
	std::string_view sv2 = "to be or no to be";
}