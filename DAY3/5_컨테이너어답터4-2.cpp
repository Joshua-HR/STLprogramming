// 5_�����̳ʾ����4-1

// �Ʒ� �ڵ忡�� "Pr"�� ����
// => "operator()" �� �������� �Լ� ��ü�̾�� �Ѵ�.
// => ���ڴ� 2���� �޾Ƽ� bool �� ��ȯ�ؾ� �Ѵ�.

// �Ʒ� �ڵ�� STL ���� �ణ �ٸ��ϴ�. - ���� �ҽ� ����
template<typename T, typename Pr = std::less<T> >
class priority_queue
{
	Pr f; // �켱 ������ ���ϱ� ���� ��ü

public:
	T& top()
	{
		// ��� 2. 
		if ( f(���1, ���2) == true) {}
	}
};

int main()
{
	priority_queue<int> pq;
	priority_queue<int, std::greater<int> > pq;
}