#include <iostream>
#include <vector>
#include <list>
#include <iterator>

int main()
{
//	std::vector<int> s = { 1,2,3,4,5,6,7,8,9,10 };
	std::list<int>   s = { 1,2,3,4,5,6,7,8,9,10 };

	auto p = s.begin(); // std::begin(s);

	// �ݺ��� p�� 5ĭ �����ϰ� �ʹ�.
	// ��� 1. + ������ ���
	// => ��������(random access iterator) �� ����.
	// p = p + 5;

	// ��� 2. ++ ������ ���
	// => ��� ������ �ݺ��� ��밡��
	// => ������, p�� ���� ���� �ݺ��ڶ�� "���� ����"
	// ++p; ++p; ++p; ++p; ++p;

	// ��� 3. std::advance() ���. ���� ���� ���
	std::advance(p, 5); // p�� ���� �����̸� +5 �� �̵�
						// �ƴѰ��,  ++�� 5ȸ ����

	
	std::cout << *p << std::endl;
}