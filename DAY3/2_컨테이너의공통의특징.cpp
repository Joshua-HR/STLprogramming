#include <list>
#include <vector>

// STL�� ��� �����̳ʴ� ��� Ÿ���̶�� ������ �ֽ��ϴ�.

template<typename T, typename Alloc = std::allocator<T>>
class list
{
	// 1. ��� ����Ÿ
public:
	// 2. ��� �Լ�

	// 3. ��� Ÿ�� - STL �����̳�(�ݺ���)�� Ư¡
	using value_type = T; // typedef T value_type
	using size_type = std::size_t; // unsigned int
	using iterator = list_iterator<T>;
};

int main()
{
	// STL �����̳��� Ư¡
	std::list<int> s = { 1,2,3 };

	// 1. ��� Ÿ���� �ִ�.
	std::list<int>::value_type n = s.front();
					    // int n = s.front();

	// ? �� �� "�ּ��� �ڵ�"�� ������ ������
	unsigned int sz = s.size();
				// => �� �ڵ�� s.size()�� 4����Ʈ ������� �����Դϴ�.

	// list �� ũ�⸦ ������ ����ϴ� Ÿ����
	// list �����ڰ� ��Ȯ�� �˰� �ֽ��ϴ�.
	std::list<int>::size_type sz = s.size();
	auto sz2 = s.size(); // C++11 ���ʹ� �� �ڵ� ����
}

// cppreference.com ���� "std::list" �˻��� ������.

// ���� : typename �� ���ؼ�
// => template ���������� "Ÿ��"�� �������� ����մϴ�.
template<typename T>
void foo(T a)
{
	T::value_type n; // error. T�� ���� �մϴ�.
	typename T::value_type n; // ok

	std::list<int>::value_type n2; // ok
							// T�� �������� �ʽ��ϴ�
							// dependent name�� �ƴմϴ�.
							// typename �ʿ� �����ϴ�.

	std::list<T>::value_type n3; // error. T�� �����մϴ�.
								 // typename �ʿ� �մϴ�.

	typename std::list<T>::value_type n3; // ok

}