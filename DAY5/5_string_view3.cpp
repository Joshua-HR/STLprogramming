// 5_string_view3
#include <iostream>
#include <string>

template<typename T,
	     typename Traits = std::char_traits<T>,
	     typename Alloc = std::allocator<T>>
class basic_string
{
public:

};

using string  = basic_string<char>;    // ansi ¹®ÀÚ¿­
using wstring = basic_string<wchar_t>; // unicode

int main()
{

}