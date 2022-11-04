#include <iostream>
#include <string>

// 약속된 멤버 함수를 만들면 됩니다.
// => static 멤버 함수 몇개를 만들어야 된다고 표준에 정리되어 있습니다.
// => cppreference.com 에서 std::char_traits 검색하세요
//    예제 있습니다   ( std::basic_string 을 먼저 검색해 보세요)
// 
// 문자열 비교에 사용할 단위 전략
struct ci_char_traits : public std::char_traits<char>
{
    static char to_upper(char ch) {
        return std::toupper((unsigned char)ch);
    }
    static bool eq(char c1, char c2) {
        return to_upper(c1) == to_upper(c2);
    }
    static bool lt(char c1, char c2) {
        return to_upper(c1) < to_upper(c2);
    }
    static int compare(const char* s1, const char* s2, std::size_t n) {
        while (n-- != 0) {
            if (to_upper(*s1) < to_upper(*s2)) return -1;
            if (to_upper(*s1) > to_upper(*s2)) return 1;
            ++s1; ++s2;
        }
        return 0;
    }
    static const char* find(const char* s, std::size_t n, char a) {
        auto const ua(to_upper(a));
        while (n-- != 0)
        {
            if (to_upper(*s) == ua)
                return s;
            s++;
        }
        return nullptr;
    }
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