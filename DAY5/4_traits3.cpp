// traits3    1�� �����ؿ�����
#include <iostream>
#include <type_traits>

template<typename T> 
void printv(const T& v)
{
//	if ( std::is_pointer<T>::value )

	// if constexpr : ������ �ð� ��� ( C++17)
	//				������ false ��� 
	//				"���ø�" => "C++ �ڵ�" ���� �ȵ�
	if constexpr (std::is_pointer<T>::value)
		std::cout << v << " : " << *v << std::endl;
	else
		std::cout << v << std::endl;
}


int main()
{
	int n = 10;

	printv(&n);// ok

	printv(n); // ���ڵ尡 ������ error
}

