// godbolt.org �� ������ ������
 
int a = 0;
int b = 0;

// foo, goo �� �ٸ� �����尡 �����մϴ�.
void foo()
{
	a = b + 1;

	std::atomic_thread_fence(); // �� ���� �����
								// �� �潺 �Ʒ��� ���� �ü� ����.
								// ��ɾ��� ���ġ�� ���� �Լ�.

	b = 1;
}









void goo()
{
	if (b == 1)
	{
		// a�� �ݵ�� 1�ϱ�� ?
	}
}

int main()
{
}


