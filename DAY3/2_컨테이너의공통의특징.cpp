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
	using value_type = T;

};


int main()
{
	// STL �����̳��� Ư¡
	std::list<int> s = { 1,2,3 };


	// 1. ��� Ÿ���� �ִ�.
	std::list<int>::value_type n = s.front();



	std::list<int>::size_type = s.size();


}