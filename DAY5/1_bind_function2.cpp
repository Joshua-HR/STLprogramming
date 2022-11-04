#include <iostream>
#include <functional>
using namespace std::placeholders;

void f1(int a)               { printf("f1 : %d\n", a); }
void f2(int a, int b)        { printf("f2 : %d, %d\n", a, b);}
void f3(int a, int b, int c) { printf("f3 : %d, %d, %d\n", a, b, c); }
void f4(int a, int b, int c, int d) { printf("f4 : %d, %d, %d, %d\n", a, b, c, d);}

class Dialog
{
public:
	void Init(int a, int b)
	{
		printf("Dialog Init : %d, %d\n", a, b);
	}
		
	static void foo(int a, int b)
	{
		printf("foo\n");
	}
};

int main()
{
	// C ����� �Լ� �����ʹ� "�������� ����" �ؼ� �����մϴ�.
//  void(*f)(int) = &f1; // ok
//	f = &f2;			 // error. ������ ������ �ٸ��ϴ�.

	// C++11 ���� �߰��� "std::function" �� ����ϸ�
	// �Լ� ������ ���� ���մϴ�.
	// void(int)    : �Լ� Ÿ��
	// void(*)(int) : �Լ� ������ Ÿ��

	std::function<void(int)> f;
    
	f = &f1;
	f(10);  // ok.. f1(10).. �ᱹ f �� �Լ� �����Ϳ� �����մϴ�.


	// �ٽ� : function �� "bind �� ���(���ο� �Լ�)"�� ������ �ִٴ� ������ �ֽ��ϴ�.
//	f = &f2; // error. f2�� ���ڰ� 2��.. 

	f = std::bind(&f2, _1, 5);
	f(7);   // f2(7, 5)

	f = std::bind(&f4, 6, _1, 4, 2 );
	f(3); // f4(6, 3, 4, 2) ó�� �����ϰ� �غ�����

	// ��� �Լ��� �ּҵ� ������ �ֽ��ϴ�.
	// ��, ��� �Լ��� ȣ���Ϸ��� ��ü�� �ʿ� �ϹǷ�
	// ��ü�� bind �Ǿ�� �մϴ�.
	Dialog dlg;
	f = std::bind(&Dialog::Init, &dlg, 3, _1);

	f(7); // dlg.Init(3, 7)


	// static ����Լ��� ��ü���� ȣ�Ⱑ���մϴ�.
	// ��, �Ϲ� �Լ��� �����ϴٰ� �����ϸ� �˴ϴ�.
	// ��ü bind �ʿ� �����ϴ�.
	f = std::bind(&Dialog::foo, _1, 5);
	f(3); // Dialog::foo(3, 5)


	// �Ʒ� �����ϼ���
	// &f1 : �Լ� �ּ� �Դϴ�. - ����Ÿ Ÿ�� : �Լ� ������ Ÿ��
	// f1  : �Լ� �̸��Դϴ�. - ����Ÿ Ÿ�� : �Լ� Ÿ��
	//       �� �Լ� �̸��� �Լ� �ּҷ� �Ͻ��� ����ȯ �˴ϴ�.
	//       �Լ� �ּҸ� �䱸�Ҷ� �̸��� ��� �˴ϴ�.

	// ����! ��� �Լ��� �̸��� ��� �Լ� �ּҷ� �Ͻ��� ����ȯ����
	//      �ʽ��ϴ�.
	// &Dialog::Init : �Լ� �ּ� �Դϴ�.
	// Dialog::Init  : �Լ� �̸� �Դϴ�.
	//					�ּҷ� �Ͻ��� ��ȯ �ȵ˴ϴ�.
	//					�ּҰ� �ʿ� �ϸ� �ݵ�� & ���̼���!
}












