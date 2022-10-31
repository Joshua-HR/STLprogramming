#include <iostream>
#include <list>
#include <algorithm>

// ���� �ݺ��ڴ� "��� �����ϳ��� ? ���������� ������ ?"

template<typename T>
class myback_insert_iterator
{
	T& container; // �����̳��� ������ ����
public:
	myback_insert_iterator(T& c) : container(c) {}

	myback_insert_iterator& operator*()
	{
		return *this;
	}

	myback_insert_iterator& operator=(typename T::value_type value)
	{
		container.push_back(value); // �ᱹ ���ڵ� ������ ���� �߰��˴ϴ�.
								// �ᱹ�� "�����̳�.push_back()" ����
								// �߰� �ϴ� ����.
		return *this;
	}
};

int main()
{
	std::list<int> s = { 1,2 };

	myback_insert_iterator< std::list<int> > p(s);
					// s�� ���� �߰��ϴ� �ݺ���

	*p = 30; // ( p.operator*() ).operator=(30)
			// s.push_back(3)
	for (auto& n : s)
		std::cout << n << ", "; // 1, 2, 30
}
