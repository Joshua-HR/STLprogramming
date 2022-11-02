// 2_컨테이너의공통의특징3
#include <list>
#include <memory> // std::allocator 가 이헤더에 있습니다.

// 모든 컨테이너의 공통의 특징
// 1. "Member Type" 이라는 개념이 있다.
// => value_type, size_type, reference, iterator 등

// 2. "요소"를 제거하면서 반환 하는 멤버 함수는 없다
// => 제거만 하거나, 반환만 한다.
// => 단, erase(p) 는 p가 가리키는 것을 제거하고, 
//    다음 요소를 가리키는 반복자 반환

// 3. 단위전략을 아주 많이 사용한다.
// => 메모리 할당기, 크기 비교, hash 함수, 상등여부

int main()
{
	std::list<int, debug_alloc<int>> s;
}