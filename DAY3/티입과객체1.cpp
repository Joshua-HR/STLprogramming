// Ÿ�԰���ü1.cpp

template<typename T> void foo(T arg) {}
template<typename T> class list {};

int main()
{
	int n = 10;
	// foo : �Լ�(���ø�) �Դϴ�.
	// list: Ŭ����(���ø�) �Դϴ�.

	// ������ �߸��� ���� ��� ������ 
	foo(int);
	foo(n);

	list<int> s1;
	list<n>   s2;
}

