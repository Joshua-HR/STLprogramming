#include <iostream>
#include <type_traits>

// traits �� ����
// 1. Ÿ�� ����    : std:is_xxx<T>::value
// 2. ���� Ÿ�Ծ�� : �Ʒ� �ڵ� ����

template<typename T> void foo(const T& b)
{

	typename std::remove_pointer<T>::type n;

	std::cout << typeid(n).name() << std::endl;
}

int main()
{
	int n = 10;

	foo(&n);
	foo(n);

}

