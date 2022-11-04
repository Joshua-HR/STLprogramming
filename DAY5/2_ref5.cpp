#include <iostream>
#include <functional>

void foo(int& a) { a = 200; }

template<typename F, typename T>
void forward_by_value(F f, T arg)
{
	f(arg);
}

int main()
{
	int n = 10;

	// ��� 1. reference_wrapper  ��ü�� ������ ����
//	std::reference_wrapper<int> r1 = n;
//	forward_by_value(foo, r1);

	// ��� 2. �ӽð�ü���·� ����
//	forward_by_value(foo, std::reference_wrapper<int>(n));

	// ��� 3. reference_wrapper ��ü�� ����� �Լ��� ���
	forward_by_value(foo, std::ref(n));
						// ref : reference_wrapper �� ����� �Լ�

	std::cout << n << std::endl;

	//========================================================
	std::function<void()> f1 = std::bind(&foo, n); // ������ ����
	std::function<void()> f2 = std::bind(&foo, std::ref(n)); 
										// ������ ����
										// ��Ȯ���� �ּҸ� �����ϴ�
										// reference_wrapper �� ����
}
