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
	using value_type = T; // typedef T value_type
	using size_type = std::size_t; // unsigned int
	using iterator = list_iterator<T>;
};

int main()
{
	// STL 컨테이너의 특징
	std::list<int> s = { 1,2,3 };

	// 1. 멤버 타입이 있다.
	std::list<int>::value_type n = s.front();
					    // int n = s.front();

	// ? 에 들어갈 "최선의 코드"를 생각해 보세요
	unsigned int sz = s.size();
				// => 이 코드는 s.size()가 4바이트 정수라는 가정입니다.

	// list 의 크기를 담을때 사용하는 타입은
	// list 설계자가 정확히 알고 있습니다.
	std::list<int>::size_type sz = s.size();
	auto sz2 = s.size(); // C++11 부터는 이 코드 가능
}

// cppreference.com 에서 "std::list" 검색해 보세요.

// 참고 : typename 에 대해서
// => template 의존적으로 "타입"을 꺼낼때만 사용합니다.
template<typename T>
void foo(T a)
{
	T::value_type n; // error. T에 의존 합니다.
	typename T::value_type n; // ok

	std::list<int>::value_type n2; // ok
							// T에 의존하지 않습니다
							// dependent name이 아닙니다.
							// typename 필요 없습니다.

	std::list<T>::value_type n3; // error. T에 의존합니다.
								 // typename 필요 합니다.

	typename std::list<T>::value_type n3; // ok

}