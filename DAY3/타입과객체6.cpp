// Ÿ�԰���ü6
#include <iostream>

int main()
{
	// �ٽ� 1. ����ǥ������ ���� ����� "Ÿ��"�� �ƴ� "��ü" �Դϴ�.
	auto f = [](int a, int b) { return a + b; };
			// class xxx{}; xxx();

	std::cout << typeid(f).name() << std::endl;


	// �ٽ� 2. ����ǥ������ ����� Ÿ���� ����Ʈ �����ڰ� �����ϴ�.
//	decltype(f) f2;	// error. 
	// xxx      f2;

	decltype(f) f3 = f;	// ok.. ���� �����ڴ� ����.
}