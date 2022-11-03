#include <iostream>
#include <memory>

// 핵심 : weak_ptr 을 자세히 살펴 봅시다.

class Car
{
public:
	void Go() {}
	~Car() {std::cout << "~Car" << std::endl;	}
};
int main()
{
	std::shared_ptr<Car> sp;
	std::weak_ptr<Car>   wp;
	{
		std::shared_ptr<Car> p(new Car);
		
		// 핵심 1. 아래 2줄의 차이점
		// => 참조 계수, 객체 파괴 시점등
		// sp = p; 
		wp = p; // weak 변수에 shared 대입 가능합니다.
		
		std::cout << p.use_count() << std::endl; // 
	}

	std::cout << "------" << std::endl;
}

