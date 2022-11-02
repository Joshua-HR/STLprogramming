// Ÿ�԰� ��ü2.cpp
#include <functional>

template<typename Pr> void sort(Pr cmp)
{
	cmp(1, 2); // ��� ��
}

template<typename Pr> class priority_queue
{
	Pr f; // ���� ���� Ÿ���� ��ü ����
public:
	void pop()
	{
		f(���1, ���2); // �񱳰�ü ���
	}
};

int main()
{
	std::less<int> f; // std::less<int> : Ÿ��
					  // f : ��ü
//	sort( std::less<int> ); // error. ��ü�� �ƴ� Ÿ�� ����
	sort( f); // ok
	sort( std::less<int>() ); // std::less<int>() : ��ü�����ϴ� ǥ���

//	priority_queue< std::less<int>() > pq; // error.
											// ���ø� ���ڴ� Ÿ���� �ʿ�

	priority_queue< std::less<int> > pq; // ok
}
