#include <iostream>
#include <type_traits> // C++11 ���� �߰��� ���̺귯��.

// �Ʒ� �ڵ尡 T�� ������ ���� �����ϴ� �ڵ��Դϴ�.
template<typename T> struct is_pointer
{
	enum { value = false };
};

// template �κ� Ư��ȭ ��� ����. 
// Ư�� ������ �����Ҷ� ������ �����ϰڴٴ� ����.
template<typename T> struct is_pointer<T*>
{
	enum { value = true };
};

template<typename T> void foo(const T& b)
{
	// T : int, int*
//	if ( is_pointer<T>::value )
	if ( std::is_pointer<T>::value)

		std::cout << "������" << std::endl;
	else
		std::cout << "������ �ƴ�" << std::endl;
}
int main()
{
	int n = 10;
	foo(n);
	foo(&n);
}
