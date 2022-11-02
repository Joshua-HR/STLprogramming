#include <list>
#include <vector>

// STL의 모든 컨테이너는 멤버 타입이라는 개념이 있습니다.

template<typename T, typename Alloc = std::allocator<T>>
class list
{
	// 1. 멤버 데이타
public:
	// 2. 멤버 함수

	// 3. 멤버 타입 - STL 컨테이너(반복자)의 특징
	using value_type = T;

};


int main()
{
	// STL 컨테이너의 특징
	std::list<int> s = { 1,2,3 };


	// 1. 멤버 타입이 있다.
	std::list<int>::value_type n = s.front();



	std::list<int>::size_type = s.size();


}