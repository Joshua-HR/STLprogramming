#include <iostream>
#include <memory>

void* operator new(size_t sz)
{
	std::cout << "new : " << sz << std::endl;
	return malloc(sz);
}

struct Point
{
	int x, y;

	Point(int a = 0, int b = 0) : x(a), y(b) {}
};

int main()
{
	// �Ʒ� �ڵ�� ���� �޸� �Ҵ��� ����ϰ� �ɱ�� ?
	// 1. new Point(1,2) �Ҷ� 8 ����Ʈ �Ҵ�
	// 2. shared_ptr �����ڰ� ������ü�� ���鶧 ������ü ũ�� ��ŭ �޸� �Ҵ�
	
	// std::shared_ptr<Point> sp(new Point(1, 2));


	// �ٽ� : shared_ptr �� ����Ҷ��� ��ü�� ���� ������ ����
	//		 make_shared �� ����ض�
	// 
	// make_shared �� �ϴ� ��
	// 1. sizeof(Point) + sizeof(������ü) �� �޸𸮸� �ѹ��� �Ҵ�
	// 2. shared_ptr �� ���� ��ȯ

	std::shared_ptr<Point> sp = std::make_shared<Point>(1, 2);

	

	
}








void foo( std::shared_ptr<int> sp, int n) {}

int goo() { return 10; }

