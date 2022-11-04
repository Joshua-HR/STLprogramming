// 5_string_view3
#include <iostream>
#include <string>

template<typename T,		// char �Ǵ� wchar_t
	     typename Traits = std::char_traits<T>,	// ���ڿ� �� �����
												// ���� ���� ����
	     typename Alloc = std::allocator<T>> 
class basic_string
{
	union
	{
		T* buff;
		T data[16];
	};
	std::size_t size;
	std::size_t capactity; // string �� ���ӵ� �޸�!
	Alloc  ax;
	// �׿� ������ ���� �߰��Ǵ� �����.. 
public:
	bool operator==(const basic_string& s)
	{
		// ���ڿ��� ���θ� �����Ҷ� ���� ������ �����մϴ�.
		return Traits::compare(buff, s.buff);
	}


};

using string  = basic_string<char>;    // ansi ���ڿ�
using wstring = basic_string<wchar_t>; // unicode


int main()
{

}