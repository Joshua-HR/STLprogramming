// 3_�����̳ʾ����3-1

/*
// �Ʒ� �ڵ忡�� �����Ͻ� ������ ������ ���� ã������
class A
{
	int data;
public:
	void foo()
	{
		*data = 10;		// error
	}
};
int main()
{
	A a;
}
*/
//==================================================

template<typename T>
class A
{
	T data;
public:
	void foo()
	{
		*data = 10;		
	}
};

int main()
{
	A<int> a;

	a.foo(); // ����� ��� �Լ��� ���� "C++ �Լ�"�� �����˴ϴ�.
			 // ������ �ν��Ͻ�ȭ��� �մϴ�.
}