// 3_선형컨테이너3-2
#include <vector>
#include <iostream>

template<typename T>
class debug_alloc
{
public:
	using value_type = T;
	debug_alloc() {}
	template<typename U> debug_alloc(const debug_alloc<U>&) {}

public:
	T* allocate(std::size_t sz) 
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
//	std::vector<int, debug_alloc<int> > v;
			// => size : 0,  capacity : 0

//	std::vector<int, debug_alloc<int> > v(100);		
			// => size : 100,  capacity : 100


	std::vector<int, debug_alloc<int> > v;
	v.reserve(100);
			// => size : 0,   capacity : 100
		

	// 100 번 push_back 했을때 메모리 재할당 상황을 살펴 봅시다.
	for (int i = 0; i < 100; i++)
	{
		v.push_back(0);
	}

	std::cout << v.size() << ", " << v.capacity() << std::endl;
				// => 100, 141 ( VC++, 컴파일러마다 다를수 있음)
}


