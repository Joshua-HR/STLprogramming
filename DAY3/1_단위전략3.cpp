#include <vector>
#include <iostream>

// 사용자 정의 메모리 할당기(allocator) 만들기
// => 메모리 할당기 만들때 지켜야 하는 규칙은 "C++ 표준 문서"에 정의되어
//    있습니다.
// 규칙 1. allocate, deallocate 함수가 필요 합니다.
// 규칙 2. value_type, 디폴트 생성자, 템플릿 생성자가 있어야 합니다.

template<typename T> 
class debug_alloc
{
public:
	using value_type = T;
	debug_alloc() {}
	template<typename U> debug_alloc(const debug_alloc<U>&) {}

public:
	T* allocate(std::size_t sz)  // unsigned int
	{
		void* p = malloc(sizeof(T) * sz);
		printf("allocate : %d cnts %p\n", sz, p);
		return static_cast<T*>(p);
	}
	void deallocate(T* p, std::size_t sz)
	{
		printf("deallocate : %d cnts %p\n", sz, p);
		free(p);
	}
};


int main()
{
	// vector 사용시 메모리 할당기 변경하기.
	std::vector<int, debug_alloc<int> > v;

	std::cout << "===========" << std::endl;
	
	v.resize(5);
	std::cout << "===========" << std::endl;
	
	v.resize(10);
	std::cout << "===========" << std::endl;
}