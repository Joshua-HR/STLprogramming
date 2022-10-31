#include <iostream>
#include <list>
#include <iterator>

int main(int argc, char** argv)
{
	std::list<int> s = { 1, 2, 3, 4, 5};

	// list ���� ��Ҹ� �߰��ϰ� �ʹ�.
	
	// ��� 1. push_back ��� �Լ� ���
	s.push_back(10);


	// ��� 2. ���� �ݺ��� ���
	std::back_insert_iterator< std::list<int> > p(s);

	*p = 20; // p �� ����Ű�� �����̳� ���� �߰�
			 // ��, "s.push_back(20)" �� ����


	// ��� 3. ���Թݺ��ڸ� ����ϴµ�. ���� ��ü�� ������ ����
	//        ���Թݺ��ڸ� ������ִ� �Լ� ���

	auto p2 = std::back_inserter(s);
				// => �ᱹ back_insert_iterator<> ��ü�� �����ؼ���ȯ

	*p2 = 30;

	for (auto e : s)
		std::cout << e << ", "; // 
}
