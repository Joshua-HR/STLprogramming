#include <iostream>
#include <thread> 

void foo(int n, double d)
{
	std::cout << "foo" << std::endl;
}

class Test
{
public:
	void goo(int n, double d)
	{
		std::cout << "goo" << std::endl;
	}
};

int main()
{
	// C++ ���� �����带 �����ϴ� ���
	std::thread t1(&foo, 3, 4.5);	// �̼��� ������ ����

	// �����带 ������ ��� �ݵ�� �Ʒ� 2���� �Ѱ��� �ؾ� �մϴ�.
	// 1. ������ ���Ḧ ����ϰų� ( join )
	// 2. �����带 ���� ���ų�(detach);

	t1.join();   // ���ο� �����尡 ����ɶ� ���� ���
//	t1.detach(); // ���ο� ������ �и�
				 // �� ��� �ֽ����� ����� ��� ���ο� ������� ��������!

	// ��� ������ �Լ�(�Լ���ü)�� ������� �����Ҽ� �ֽ��ϴ�.
	Test test;
	std::thread t2(&Test::goo, &test, 1, 3.4);
				//	 test.goo(1, 3.4) �� ������� ����

	t2.join();
}


