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
	std::shared_ptr<int> sp(malloc(100), free);
	std::unique_ptr<int, Freer > up(malloc(100));
	


}