// Ÿ�԰���ü1.cpp

template<typename T> void foo(T arg) {}
template<typename T> class list {};

int main()
{
	int n = 10;
	// foo : �Լ�(���ø�) �Դϴ�.
	// list: Ŭ����(���ø�) �Դϴ�.

	// ������ �߸��� ���� ��� ������ 
	foo(int);	// error
	foo(n);		// ok. �Լ��� ���ڴ� ��ü(����)�� �����մϴ�.

	list<int> s1; // ok
	list<n>   s2; // error. ���ø� ���ڴ� Ÿ���� �����ؾ� �մϴ�.
	
	// �Լ� ���� : Ÿ���� �ƴ� ��ü ����
	// ���ø����� : Ÿ������
}

