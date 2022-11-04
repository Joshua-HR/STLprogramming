#include <memory>
#include <iostream>

// C++ 표준 스마트 포인터는 3개 입니다.
// std::shared_ptr : 자원의 공유
// std::weak_ptr   : 자원의 소유권 없음
// std::unique_ptr : 자원의 소유권 독점

int main()
{
	
	std::unique_ptr<int> up1(new int);
//	std::unique_ptr<int> up2 = up1;	// error
	std::unique_ptr<int> up2 = std::move(up1);	// ok

	// unique_ptr 은 오버헤드가 거의 없습니다.
	std::cout << sizeof(up1) << std::endl; // "raw pointer 와동일"
}