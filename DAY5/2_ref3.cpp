#include <iostream>

void foo(int& a) { a = 200; }

template<typename F, typename T> 
void forward_by_value(F f, T arg)
{
	f(arg);
}

int main()
{
	int n = 10;

//	foo(n);	// �̷��� �����ϸ� n �� 200���� ����

//	forward_by_value(foo, n); // foo �� n �� ������ �޶�.
							  // n �� 200���� ������� �ʰ� ���纻�� ����
	
	// 1. "forward_by_value" �� ���ؼ� n ��ü�� foo �� ��������
	// => �ּҸ� ������ �մϴ�.
	forward_by_value(foo, &n);
				// => forward_by_value �� ���纻�� �ƴ� �ּ� ������ ����
				// => �׷���, foo(int& arg) �� �ּҸ� ������ �����Ƿ� ����
				
	std::cout << n << std::endl; 
}
