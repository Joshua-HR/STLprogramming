#include <iostream>
#include <list>

int main()
{
	std::list<int> s1 = { 1,2,3 };

	// �ٽ� 1. end() �� ��� �ݺ��ڴ� �������� �ƴ� ������ ������ ����ŵ�ϴ�.
	// => "past the end" ��� �մϴ�.
	auto p1 = std::begin(s1); // s1.begin();
	auto p2 = std::end(s1);	  // s1.end();

	*p1 = 10; // ok
//	*p2 = 10; // ����.. runtime error

	// �ٽ� 2. end�� ��� �ݺ��ڴ� == �� != ���길 ����ؾ� �մϴ�.
	// "[p1, p2)" �� ǥ�� �մϴ�.

	while (p1 != p2)
	{
		++p1;
	}

	// 3. �����̳ʰ� ��� ������ .begin() == .end() �Դϴ�.
	std::list<int> s3;
	if (s3.empty()) {} // true

	if (std::begin(s3) == std::end(s3)) {}	
	if (s3.begin()) == s3.end()) {}
}