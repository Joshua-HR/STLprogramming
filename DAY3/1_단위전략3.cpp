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
	
	v.resize(5); // sizeof(int)*5 의 메모리 할당 필요
				 // debug_alloc 의 allocate(5) 를 호출

	std::cout << "===========" << std::endl;
	
	v.resize(10);
	std::cout << "===========" << std::endl;
}

// 핵심 : 단위전략(Policy Base Design) 이란 ??

// => 클래스가 사용하는 정책을 템플릿 인자로 교체할수 있게 만드는 디자인

// => 메모리할당/해지 정책, 요소 비교 정책, 크기 비교 정책등을 템플릿인자로
//    교체

// => 각각의 정책은 지켜야 하는 규칙이 있다.

std::vector<int, debug_alloc<int>> v; // 메모리할당/해지방식 교체
			// => 사용자 정의 메모리 할당기는 지켜야 되는 규칙이 있다.
			//    위 코드 참고

/*
// 아래 코드는 클래스가 아닌, 함수가 사용하는 정책을 변경하는 것 입니다.
// 이 경우는 "단위전략" 이라고 하지는 않습니다.
int n1 = std::accumulate(v.begin(), v.end(), 0); 
int n2 = std::accumulate(v.begin(), v.end(), 1, std::mutilpies<int>());

template<typename Iter, typename OP>
typename Iter::value_type accumulate(Iter first, Iter last,
				typename Iter::value_type init,
				OP op = std::plus<typename Iter::value_type>())
{

}
*/