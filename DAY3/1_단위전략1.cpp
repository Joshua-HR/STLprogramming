#include <iostream>
#include <memory>

int main()
{
	// 메모리 할당 방식을 변경하려고 합니다.( new => malloc )
	// 아래 코드의 경우 몇줄을 변경해야 할까요 ?
	// => 4줄 모두 변경해야 한다.(malloc, free)
	int* p1 = new int;
	int* p2 = new int;

	delete p1;
	delete p2;

	// C++ 에서는 메모리 할당 방식을 쉽게 변경하기 위해서
	// "allocator" 라는 클래스를 제공합니다.
	std::allocator<int> ax; // int 타입의 객체를 생성하는 메모리 할당기


	int* p3 = ax.allocate(10); // int 타입 10개의 메모리를 할당
	int* p4 = ax.allocate(1);

	ax.deallocate(p3, 10);	
	ax.deallocate(p4, 1);

}