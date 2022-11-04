#include <iostream>
#include <string>

// ���ڿ� �񱳿� ����� ���� ����
struct ci_char_traits
{
	// ��ӵ� ��� �Լ��� ����� �˴ϴ�.
	// => static ��� �Լ� ��� ������ �ȴٰ� ǥ�ؿ� �����Ǿ� �ֽ��ϴ�.
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