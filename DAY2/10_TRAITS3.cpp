#include <iostream>
#include <list>


// �ݺ��ڴ�
// 1. Ŭ������ ���� "��ü������ �ݺ���"
// 2. "Raw Pointer" 
// �� �ֽ��ϴ�.

// �� 2���� ������ ������ �Ʒ� "sum" ���� �Ϲ�ȭ �Լ��� ����� ��ƽ��ϴ�.

// �Ʒ� �ڵ尡 �� ������ �ذ��ش� �����Դϴ�.
template<typename T> struct iterator_traits
{
	using value_type = typename T::value_type;
};

// T �� "Raw Pointer" ��� �� ���ø� ���� �Ʒ� ���ø� ����ϰڴٴ°� !!
template<typename T> struct iterator_traits<T*>
{
	using value_type = T;
};

template<typename T>
typename std::iterator_traits<T>::value_type sum(T first, T last)
{
//	typename T::value_type s = 0; 
	
	// T�� ��ü�� �ݺ��� : �Ʒ� value_type �� �ᱹ "T::value_type"
	// T�� raw pointer(int*��) ��� value_type : int
	typename std::iterator_traits<T>::value_type s = 0;




	while (first != last)
	{
		s = s + *first;
		++first;
	}
	return s;
}

int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	int n1 = sum(s.begin(), s.end());	// ��ü�� �ݺ���
	int n2 = sum(x, x + 10);			// raw pointer

	std::cout << n1 << std::endl;
	std::cout << n2 << std::endl;

	// �ٽ�
	// �ݺ��� T�� ����Ű�� Ÿ�� ���
	// typename T::value_type    : T�� ��ü�� �ݺ����϶��� ����
	//								   Raw Pointer ��� ����

	// typename std::iterator_traits<T>::value_type  
	//							=> T�� raw pointer �� ok..!!
	//							=> ���� ���� �ڵ�.

}