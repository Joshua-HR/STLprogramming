#include <iostream>
#include <memory>

// ������ ����

void foo(void* p) { free(p); }

int main()
{
	// �ٽ� 1. make_shared �� ����ϸ� �׻� new �� �ڿ��� �����մϴ�.
	std::shared_ptr<int> sp1 = std::make_shared<int>(0);	
								// => 0 �� new int(0) ��, �ʱⰪ


	// �ٽ� 2. new �̿��� ������� �ڿ��� �Ҵ��Ϸ��� ���� �Ҵ��ϸ� �˴ϴ�.
//	std::shared_ptr<int> sp2( malloc(40) ); 
					// => ����, sp2�� �Ҹ��ڰ� delete �ϰ� �˴ϴ�.

	std::shared_ptr<int> sp2(static_cast<int*>(malloc(40)), foo );
	std::shared_ptr<int> sp3(static_cast<int*>(malloc(40)), free);
					// => ok. ������ 2��° ���ڷ� �����ϴ� ��� ����
					// => ����ǥ�������� �����ص� �˴ϴ�.

	// �ٽ� 3. �迭 ���·� �Ҵ�
//	std::shared_ptr<int> sp4(new int[10]);
					// => ����, �Ҹ��ڿ��� delete[] �� �ƴ� delete

	std::shared_ptr<int> sp4(new int[10], [](int* p) { delete[] p; });
					// => ok..

	std::shared_ptr<int[]> sp5(new int[10]); // ok.. ��, C++17 ����

	// ����, new int[10] �� �ʿ��ϰ�, �ڵ������� ���ϸ�!!!
	// ����Ʈ ������ ���� vector �� ���� ����ض�.
//	std::vector<int> v(10);
}







