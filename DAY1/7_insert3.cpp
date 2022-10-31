#include <iostream>
#include <list>
#include <iterator>

// ���Թݺ�������

int main(int argc, char** argv)
{
	std::list<int> s = {    0, 0, 0, 0, 0     };


	// �ٽ� 1.  ���Թݺ��ڴ� 3������ �ֽ��ϴ�.
	// ���� ����, �Ĺ� ����, ���� ����
	// ���� ������ ���, ��� ��ġ�� ������ �ݺ��ڸ� �����ؾ� �մϴ�.

//	std::front_insert_iterator< std::list<int> > p1(s);
//	std::back_insert_iterator< std::list<int> >  p2(s);
//	std::insert_iterator< std::list<int> > p3(s, ++s.begin());

	// �ٽ� 2. ���Թݺ��� ���鶧 �Լ� ������ ����ϴ� ���� �����մϴ�.
	auto p1 = std::front_inserter(s);
	auto p2 = std::back_inserter(s);
	auto p3 = std::inserter(s, ++s.begin());


	*p1 = 10; // s.push_front(10)
	*p2 = 20; // s.push_back(20);
	*p3 = 30; // s.insert(++s.begin(), 30);


	for (auto& n : s)
		std::cout << n << ", ";
}