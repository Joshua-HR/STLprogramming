#include <memory>
#include <iostream>

int main()
{
	std::unique_ptr<int> up(new int);
	std::shared_ptr<int> sp(new int);

	// 다음중 에러는 ?
	std::shared_ptr<int> sp1 = up;				// 1 error
	std::shared_ptr<int> sp2 = std::move(up);	// 2 ok	
			
	std::unique_ptr<int> up1 = sp;				// 3 error
	std::unique_ptr<int> up2 = std::move(sp);	// 4 error
}

// 아래 함수 는 메모리 할당후 주소를 반환 합니다.
// 반환 타입을 스마트 포인터로 변경하려고 합니다.
// shared_ptr 로 할까요 ? unique_ptr 로 할까요 ?
//std::shared_ptr<int> Alloc() // 받을때 shared_ptr로만 사용가능합니다.
std::unique_ptr<int> Alloc()	// 호출자가 어떻게 받을지 선택가능합니다.
{
	return std::make_unique<int>();
}

int main()
{
	std::shared_ptr<int> sp = Alloc();
	std::unique_ptr<int> up = Alloc();
}