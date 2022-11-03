#include <iostream>

class Car
{
public:
	void Go() { std::cout << "Go" << std::endl; }
	~Car()    { std::cout << "~Car" << std::endl; }
};
// 개념 : 임의 타입의 객체가 다른 타입의 포인터 역활을 하는 것
// 
// 원리 : -> 와 * 연산자를 재정의 해서 포인터처럼 동작하게 만든것
// 
// 장점 : raw pointer 가 아닌 객체라는 점
//       생성/복사/대입/파괴의 모든 순간에 약속된 함수가 호출된다.
//       각 과정에서 추가의 작업수행가능
//       대표적 활용이 소멸자에서 delete 기능 

// 아래 Ptr 클래스가 핵심 입니다.
class Ptr
{
	Car* obj;
public:
	Ptr(Car* p = 0) : obj(p) {}
	
	~Ptr() { delete obj; }

	Car* operator->() { return obj; }
	Car& operator*() { return *obj; }
};

int main()
{
	Ptr p = new Car; // Ptr p( new Car )

	// Ptr 타입의 "객체 p" 가 마치 "Car*" 인것 처럼 사용됩니다.

	p->Go(); // p.operator->() Go()		// 이런 의미지만
			 // (p.operator->())->Go()  // 이렇게 해석 됩니다.

	(*p).Go(); // ( p.operator*()).Go();

}


