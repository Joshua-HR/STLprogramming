#include <iostream>

// 핵심 1. C++11의 스마트포인터를 사용하려면 필요한 헤더
#include <memory>

class Car
{
public:
	void Go() { std::cout << "Go" << std::endl; }
};

int main()
{
	// 핵심 2. ()로만 초기화 가능하고 = 은 안됩니다.
	// => 생성자가 "explicit" 라는 의미
	std::shared_ptr<int> p1(new int) ; // ok
//	std::shared_ptr<int> p2 = new int; // error


	// 핵심 3. 스마트 포인터의 크기
	std::cout << sizeof(p1)   << std::endl; // 일반적으로 
											// raw pointer 크기 2배
	std::cout << sizeof(int*) << std::endl; // 32bit : 4
											// 64bit : 8



	// 핵심 4. -> 와 . 연산자
	std::shared_ptr<Car> sp1(new Car);
	std::shared_ptr<Car> sp2 = sp1;

	// -> 연산자 : 대상체(Car) 멤버에 접근
	sp1->Go();


	// . 연산자 : shared_ptr 자체의 멤버에 접근
	int n = sp1.use_count(); // 2

	Car* p = sp1.get();      // sp1이 가리키는 객체의 실제 주소
	sp1.reset(); // sp1 = nullptr 의 의미
	sp2 = nullptr; // 직접 이렇게 해도 됩니다.
					// 이순간 참조계수는 0, 객체 파괴
}



