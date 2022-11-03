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


	f = std::bind(&f4, ? );
	f(3); // f4(6, 3, 4, 2) ó�� �����ϰ� �غ�����
}












