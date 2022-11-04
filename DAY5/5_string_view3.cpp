// 5_string_view3
#include <iostream>
#include <string>

template<typename T,		// char 또는 wchar_t
	     typename Traits = std::char_traits<T>,	// 문자열 비교 방법을
												// 가진 단위 전략
	     typename Alloc = std::allocator<T>> 
class basic_string
{
	union
	{
		T* buff;
		T data[16];
	};
	std::size_t size;
	std::size_t capactity; // string 도 연속된 메모리!
	Alloc  ax;
	// 그외 구현에 따라 추가되는 멤버들.. 
public:
	bool operator==(const basic_string& s)
	{
		// 문자열의 상등여부를 조사할때 단위 전략에 의존합니다.
		return Traits::compare(buff, s.buff);
	}


};

using string  = basic_string<char>;    // ansi 문자열
using wstring = basic_string<wchar_t>; // unicode


int main()
{

}