#include <iostream>

template<typename T>
class Ptr
{
	T* obj;
public:
	Ptr(T* p = 0) : obj(p) {}
	T* operator->() { return obj; }
	T& operator*() { return *obj; }
	~Ptr() { delete obj; }

	// 컴파일러가 복사 생성자를 만들지 못하게 한다.
	Ptr(const Ptr&) = delete;
	Ptr& operator=(const Ptr&) = delete;
};

int main()
{
	Ptr<int> p1 = new int;
	*p1 = 100;
	std::cout << *p1 << std::endl;

	Ptr<int> p2 = p1; // 복사 생성자가 삭제 되었으므로
					  // 에러..
					  // 이제 자원은 공유 될수 없다.
						
}


