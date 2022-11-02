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

	// ��C++20 ���ʹ�
	// 1. ���� ǥ���� ��ü�� decltype �� ������ �ְ�
	// 2. ���� ǥ������ ����� Ÿ���� ����Ʈ �����ڵ� �ֽ��ϴ�.
	// �׷��� �׳�, �Ʒ�ó���ϸ� �˴ϴ�.

	pqueue< decltype([](int a, int b) { return a < b; }) > pq1;
}