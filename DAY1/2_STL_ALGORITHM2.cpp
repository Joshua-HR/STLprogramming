#include <iostream>


// 2. �˻� ������ �Ϲ�ȭ(Ȱ�뵵�� �о����� �ִٴ� �ǹ�) 

// => ��ü ���ڿ� �� �ƴ϶� �κ� ���ڿ��� �˻� �����ϰ� ����.
// => last �� �˻� ��� �ƴ�. 
//    [first, last) �� ǥ��. �� ���� ����(half open range)

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
	char* p = xstrchr(s, s + 4, 'e'); // �˻� ����



	if (p == nullptr)
		std::cout << "not found" << std::endl;
	else
		std::cout << "found : " << *p << std::endl;
}