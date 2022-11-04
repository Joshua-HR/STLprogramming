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
	// shared_ptr : 삭제자를 변경해도 같은 타입
	//				단, 삭제자를 보관할 공간이 필요!
	std::shared_ptr<int> sp1(malloc(100), free);
	std::shared_ptr<int> sp2(malloc(100), foo);

	// unique_ptr : 삭제자를 변경하면 다른 타입
	//			    삭제자를 저장할 공간 필요 없다.
	std::unique_ptr<int, Freer1 > up1(malloc(100));
	std::unique_ptr<int, Freer2 > up2(malloc(100));


}