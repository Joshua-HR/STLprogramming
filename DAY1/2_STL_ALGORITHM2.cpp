#include <iostream>


// 2. 검색 구간의 일반화(활용도가 넓어지고 있다는 의미) 

// => 전체 문자열 뿐 아니라 부분 문자열도 검색 가능하게 하자.
// => last 는 검색 대상 아님. 
//    [first, last) 로 표기. 반 개행 구간(half open range)

char* xstrchr(char* first, char* last, int c)
{
	while (first != last && *first != c)
		++first;

	return first == last ? nullptr : first;
}

int main()
{
	char s[] = "abcdefgh";

//	char* p = xstrchr(s, s+4, 'c');
	char* p = xstrchr(s, s + 4, 'e'); // 검색 실패



	if (p == nullptr)
		std::cout << "not found" << std::endl;
	else
		std::cout << "found : " << *p << std::endl;
}