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
	// 아래 코드는 동적 메모리 할당을 몇번하게 될까요 ?
	// 1. new Point(1,2) 할때 8 바이트 할당
	// 2. shared_ptr 생성자가 관리객체를 만들때 관리객체 크기 만큼 메모리 할당
	
	// std::shared_ptr<Point> sp(new Point(1, 2));


	// 핵심 : shared_ptr 을 사용할때는 객체를 직접 만들지 말고
	//		 make_shared 를 사용해라
	// 
	// make_shared 가 하는 일
	// 1. sizeof(Point) + sizeof(관리객체) 의 메모리를 한번에 할당
	// 2. shared_ptr 을 만들어서 반환

	std::shared_ptr<Point> sp = std::make_shared<Point>(1, 2);

	

	
}








void foo( std::shared_ptr<int> sp, int n) {}

int goo() { return 10; }

