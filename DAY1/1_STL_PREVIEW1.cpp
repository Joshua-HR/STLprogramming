// 1_STL_PREVIEW1
#include <iostream>
#include <string>

int main()
{
	// C ��� ���ڿ� : ���ڿ� �迭, ���ڿ� ������
	char s1[] = "Hello";
	char s2[] = "Hello";

	if (s1 == s2) {} // �ǵ� : ���ڿ� ��ü�� ��
					 // ��� : �迭�� �ּ� ��, �׻� false
					 // �ǵ� ��� �Ϸ��� strcmp() ���
	if (strcmp(s1, s2) == 0) {}

//	s2 = s1; // �ǵ� : ���ڿ� ����
			 // ��� : �迭�� �̸��� ��� �̹Ƿ� error
			 // �ǵ���� �Ϸ��� strcpy(), strcpy_s() �� ���

	// C++ ������ string Ŭ���� ����
	std::string s3 = "hello";
	std::string s4;

	s4 = s3; // ���Ե� �ǰ�
	s4 = s4 + s3; // + �� ����.
				  // s4 * 3 => s4 + s4 + s4 �ǵ� �ε� C++ �� �ȵ˴ϴ�.

	std::cout << s4 << std::endl; // ��µ� �ǰ�

	if (s3 == s4) {} // �񱳵� �ٷ� ����.  

}
