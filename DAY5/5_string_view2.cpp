// 5_string_view
#include <iostream>
#include <string>
#include <string_view>

void* operator new(std::size_t sz)
{
	std::cout << sz << "메모리 할당" << std::endl;
	return malloc(sz);
}

// 인자로 문자열을 받고 싶습니다. 읽기만 하면 됩니다

// 방법 1. call by value : 객체와 문자열 모두 복사본 생성
// => 너무 오버헤드 큽니다. 사용하지 마세요!!
// void foo(std::string name) { }

// 방법 2. const string& 
// => 복사본 없습니다. 좋은 방법
// => 하지만, 문제점이 있습니다.

void foo(const std::string& name) { }

// 방법 3. C++17 string view
// => call by value 로 사용하는 것 입니다.
void foo(std::string_view name) { }


int main()
{
//	std::string s = "sdjfsljflsjlsdkjfssfsd";
//	foo(s);

	foo("sdjfsljflsjlsdkjfssfsd"); // 이 경우를 생각해 봅시다.
}






