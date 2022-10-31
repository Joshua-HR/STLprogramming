class Test
{
public:
	enum { value = 1 };
	typedef int DWORD; // using DWORD = int
};
int p = 0;

template<typename T> void foo(T a)
{
	// �Ʒ� 2�ٿ��� * �� �ǹ̸� ������ ������(1. ���ϱ�, 2. ������ ���� ����)
	
	// �ٽ� 1. "Ŭ�����̸�::�̸�" ���� "�̸�"�� �ǹ̴� 
	
	// "��" �ϼ� �ִ�.  : enum ����� static ��� ����Ÿ
	// "Ÿ��"�ϼ��� �ִ� : typedef �Ǵ� using 

//	Test::value * p;	// "1 * 0"  ��, * �� ���ϱ��� �ǹ�
//	Test::DWORD * p;	// "int* p" ��, * �� ������ ������ ����

	// �� ������ �����ؼ� �Ʒ� �ڵ带 �ؼ��� ������
	// "dependent name" : ���ø� ���� T�� �����ؼ� ������ �̸�
	// => �����Ϸ��� �̸��� �ǹ̸� ������ "��" ���� ��� �մϴ�.
	T::value * p; // ok
//	T::DWORD * p; // error. ���� vc2017 ���� ������ ���� �ʴ�
				  // ��쵵 �ִµ�, ǥ�ؿ����� ���� �̰�
				  // VC �� �ڵ尡 ���� ������ ���� �����Դϴ�.

	typename T::DWORD* p; // ok
		// => dependent name �� "��" �� �ƴ� "Ÿ��"�� �̸�����
		//    �ؼ��� �޶�°�
		
}



int main()
{
	Test t;
	foo(t);
}