#include <iostream>
#include <thread>

// atomic

int x = 0;


void foo()
{
	for (int i = 0; i < 1000000; i++)
	{
	//	x = x + 1;

		// �� ������ �Ʒ��� 3�ٷ� ������ �˴ϴ�.
		/*
		__asm
		{
			mov eax, x
			add eax, 1
			mov x, eax
		}
		*/

		// intel ��ɾ��
		// ��Ƽ�ھ ������ ����� �ֽ��ϴ�.
		// lock ���ξ� : �������� CPU �� �־ �ش��ϴ� ������ ���ÿ� ��������
		//				���ϰ� �ϴ� ���
		/*
		__asm
		{
			lock inc x
		}
		*/
		// �̷� ����� lock-free ��� �մϴ�.
		// lock �� "����" �� ���� �ƴ϶�
		// => OS�� ����� ����ϴ� ���� �ƴ϶�
		//    CPU ������ ������� ����ȭ �ϴ� ��
		
	}
}


int main()
{
	std::thread t1(&foo);
	std::thread t2(&foo);
	std::thread t3(&foo);
	t1.join();
	t2.join();
	t3.join();

	std::cout << x << std::endl;
}