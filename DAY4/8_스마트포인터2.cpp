#include <iostream>

// 1. 템플릿으로 만들어야 한다.

// 2. 복사 생성자를 만들어서 얕은 복사 문제를 해결해야 한다.

// A. 깊은 복사 : 거의 사용되지 않음
// B. 참조 계수 : 스마트 포인터 만들때 많이 사용
// C. 복사 금지 : 스마트 포인터 만들때 많이 사용
// D. 소유권 이전 : std::move 개념!!


template<typename T>
class Ptr
{
	T* obj;
public:
	Ptr(T* p = nullptr) : obj(p) {}

	~Ptr() { delete obj; }

	T* operator->() { return obj; }
	T& operator*() { return *obj; }
};
int main()
{
	Ptr<int> p1 = new int;
	*p1 = 10;
	std::cout << *p1 << std::endl;

	Ptr<int> p2 = p1; // runtime error
}


