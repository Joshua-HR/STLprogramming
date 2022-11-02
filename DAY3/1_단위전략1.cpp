#include <iostream>
#include <memory>

int main()
{
	// �޸� �Ҵ� ����� �����Ϸ��� �մϴ�.( new => malloc )
	// �Ʒ� �ڵ��� ��� ������ �����ؾ� �ұ�� ?
	// => 4�� ��� �����ؾ� �Ѵ�.(malloc, free)
	int* p1 = new int;
	int* p2 = new int;

	delete p1;
	delete p2;

	// C++ ������ �޸� �Ҵ� ����� ���� �����ϱ� ���ؼ�
	// "allocator" ��� Ŭ������ �����մϴ�.
	std::allocator<int> ax; // int Ÿ���� ��ü�� �����ϴ� �޸� �Ҵ��


	int* p3 = ax.allocate(10); // int Ÿ�� 10���� �޸𸮸� �Ҵ�
	int* p4 = ax.allocate(1);

	ax.deallocate(p3, 10);	
	ax.deallocate(p4, 1);

}