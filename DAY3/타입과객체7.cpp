// Ÿ�԰���ü7

template<typename Pr>
class pqueue
{
	Pr cmp;	// �̷��Ը� �ϸ� ����Ʈ �����ڰ� �ʿ� �մϴ�.
			// �׷��� �Ʒ� ���� �ִ� �����ڰ� �ʿ� �մϴ�.
public:
	pqueue() {}
	pqueue(Pr f) : cmp(f) {} // cmp ���鶧 f�� �ʱ�ȭ
							// ��, ����Ʈ �����ڰ� �ƴ� ���� ������

	void pop() {}
};

int main()
{
	auto cmp = [](int a, int b) { return a < b; };

	pqueue< decltype(cmp) > pq(cmp);
}