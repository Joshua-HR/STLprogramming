#include <iostream>

// 16 page
// Step 1. C ǥ?? ?Լ?
char* xstrchr(char* s, int c)
{
	while (*s != 0 && *s != c)
		++s;

	return *s == 0 ? nullptr : s;
}

int main()
{
	char s[] = "abcdefgh";

	char* p = xstrchr(s, 'c');

	if (p == nullptr)
		std::cout << "not found" << std::endl;
	else
		std::cout << "found : " << *p << std::endl;
}