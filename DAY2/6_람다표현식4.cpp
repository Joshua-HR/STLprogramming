// 6_����ǥ����4
#include <iostream>

// � �Լ��� ���ڷ� �Լ��� �������� �մϴ�.

// 1. �Լ� �����ͷ� �ޱ�
void f1(int(*f)(int, int))
{
	f(1, 2);
}

// 2. ���ø����� �ޱ�
template<typename T>
void f2(T f)
{
	f(1, 2);
}

int main()
{
	f1( [](int a, int b) {return a + b; } );
	f2( [](int a, int b) {return a + b; } );
}