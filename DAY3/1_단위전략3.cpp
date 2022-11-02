#include <vector>
#include <iostream>

// ����� ���� �޸� �Ҵ��(allocator) �����
// => �޸� �Ҵ�� ���鶧 ���Ѿ� �ϴ� ��Ģ�� "C++ ǥ�� ����"�� ���ǵǾ�
//    �ֽ��ϴ�.
// ��Ģ 1. allocate, deallocate �Լ��� �ʿ� �մϴ�.
// ��Ģ 2. value_type, ����Ʈ ������, ���ø� �����ڰ� �־�� �մϴ�.

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
	// vector ���� �޸� �Ҵ�� �����ϱ�.
	std::vector<int, debug_alloc<int> > v;

	std::cout << "===========" << std::endl;
	
	v.resize(5);
	std::cout << "===========" << std::endl;
	
	v.resize(10);
	std::cout << "===========" << std::endl;
}