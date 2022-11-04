#include <iostream>
#include <string>

// 문자열 비교에 사용할 단위 전략
struct ci_char_traits
{
	// 약속된 멤버 함수를 만들면 됩니다.
	// => static 멤버 함수 몇개를 만들어야 된다고 표준에 정리되어 있습니다.
};
int main()
{
	std::string s1 = "abcd";
	std::string s2 = "ABCD";

	std::cout << (s1 == s2) << std::endl; // false(0)


	using ci_string = std::basic_string<char, ci_char_traits>;

	ci_string s3 = "abcd";
	ci_string s4 = "ABCD";

	std::cout << (s3 == s3) << std::endl; // true(1)
}