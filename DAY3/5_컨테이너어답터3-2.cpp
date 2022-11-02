#include <vector>

/*
class queue1
{
	std::vector<int> q;
public:
	void pop()
	{
		q.pop_front();	// �׻� ����
						// vector �� pop_front() �����ϴ�.
	}
};

int main()
{
	queue1 q1;

	// queue1 �� ���ø�(Ʋ)�� �ƴմϴ�. 
	// q1.pop() �� ������� �ʾƵ� �����Դϴ�.
}
*/

template<typename T>
class queue1
{
	std::vector<T> q;
public:
	void pop()
	{
		q.pop_front();
	}
};

int main()
{
	queue1<int> q1;

	q1.pop();
}