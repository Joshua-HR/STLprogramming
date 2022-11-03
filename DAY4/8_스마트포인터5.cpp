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
										// Point 만들때 1,2 를 생성자인자로!

	// std::make_shared 의 장점
	// 1. 효율적인 메모리 관리
	// 2. 안전성!!


	// 아래 코드는 3가지 작업을 해야 합니다.
	// (1), (2), (3) 의 순서로 실행되면 안전합니다.
	// (1), (3), (2) 의 순서로 실행되고, (3)에서 예외가 나오면
	//					(1)에서 할당한 메모리는 leak 이 됩니다.
	//     (2)				  (1)      (3)
	foo(std::shared_ptr<int>(new int), goo());

	// 안전하려면
	// "자원 할당"과 "자원을 관리하는 객체의 생성" 은
	// 반드시 한번에 해야 합니다.


	// 아래 코드는 항상 안전합니다.
	// (1) 자체가 자원 할당과 스마트 포인터 생성을 한번에 하게 됩니다.
	//			(1)					(2)
	foo( std::make_shared<int>(0), goo());
}



void foo( std::shared_ptr<int> sp, int n) {}

int goo() { return 10; }

