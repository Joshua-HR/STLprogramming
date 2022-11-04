#include <memory>
#include <iostream>
struct Freer
{
	void operator()(void* p) { free(p); }
};
int main()
{
	// ������ ����
	std::unique_ptr<int> up1(new int); // ok delete

	// �迭�� <int[]> �� ���� - C++14
	std::unique_ptr<int[]> up2(new int[10]);


	// ������ ������ ���ø� ���ڷ� �Լ� ��ü����
	std::unique_ptr<int, Freer > up3(static_cast<int*>(malloc(sizeof(int)));


	// shared_ptr vs unique_ptr
	// shared_ptr : �����ڸ� �����ص� ���� Ÿ��
	//				��, �����ڸ� ������ ������ �ʿ�!
	std::shared_ptr<int> sp1(malloc(100), free);
	std::shared_ptr<int> sp2(malloc(100), foo);

	// unique_ptr : �����ڸ� �����ϸ� �ٸ� Ÿ��
	//			    �����ڸ� ������ ���� �ʿ� ����.
	std::unique_ptr<int, Freer1 > up1(malloc(100));
	std::unique_ptr<int, Freer2 > up2(malloc(100));


}