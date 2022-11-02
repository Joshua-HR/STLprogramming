#include <vector>
#include <algorithm>
#include "show.h"

// C++11 에서, 모든 요소가 스택에 놓이는 새로운 컨테이너를 제공합니다.
template<typename T, int N>
struct array
{
	T buff[N];

	using value_type = T;
	using reference = T&;
	using pointer   = T*;
	using size_type = std::size_t;

	using iterator = T*; // 반복자를 클래스로 설계해도 되지만
						 // 이렇게 "raw pointer" 를 사용해도 됩니다.
						// raw pointer 도 반복자의 모든 특징을 가지게
						// 됩니다.

	// STL 컨테이너는 반드시 begin, end 가 있어야 합니다.
	iterator begin() { return ? ; }
	iterator end() { return ? ; }

	int size() const { return N; }
	bool empty() const { return N==0; }
};


int main()
{
	// 구조체 안에 배열이 있으면 아래 처럼 초기화 가능합니다.
	array<int, 5> arr = { 1,2,3,4,5 };

	// 메모리 구조는 "raw array" 와 동일하지만
	// 몇가지 멤버 함수가 제공되어서 "raw array" 보다 편리합니다.
	int n = arr.size();
}
