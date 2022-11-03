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
										// Point ���鶧 1,2 �� ���������ڷ�!

	// std::make_shared �� ����
	// 1. ȿ������ �޸� ����
	// 2. ������!!


	// �Ʒ� �ڵ�� 3���� �۾��� �ؾ� �մϴ�.
	// (1), (2), (3) �� ������ ����Ǹ� �����մϴ�.
	// (1), (3), (2) �� ������ ����ǰ�, (3)���� ���ܰ� ������
	//					(1)���� �Ҵ��� �޸𸮴� leak �� �˴ϴ�.
	//     (2)				  (1)      (3)
	foo(std::shared_ptr<int>(new int), goo());

	// �����Ϸ���
	// "�ڿ� �Ҵ�"�� "�ڿ��� �����ϴ� ��ü�� ����" ��
	// �ݵ�� �ѹ��� �ؾ� �մϴ�.


	// �Ʒ� �ڵ�� �׻� �����մϴ�.
	// (1) ��ü�� �ڿ� �Ҵ�� ����Ʈ ������ ������ �ѹ��� �ϰ� �˴ϴ�.
	//			(1)					(2)
	foo( std::make_shared<int>(0), goo());
}



void foo( std::shared_ptr<int> sp, int n) {}

int goo() { return 10; }

