#include <memory>
#include <iostream>
struct Freer
{
	void operator()(void* p) { free(p); }
};
int main()
{
	// 삭제자 변경
	std::unique_ptr<int> up1(new int); // ok delete

	// 배열은 <int[]> 로 전달 - C++14
	std::unique_ptr<int[]> up2(new int[10]);


	// 그위의 변경은 템플릿 인자로 함수 객체전달
	std::unique_ptr<int, Freer > up3(static_cast<int*>(malloc(sizeof(int)));


	// shared_ptr vs unique_ptr
	std::shared_ptr<int> sp(malloc(100), free);
	std::unique_ptr<int, Freer > up(malloc(100));
	


}