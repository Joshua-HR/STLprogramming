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
	
	} // <= p 파괴되므로 객체도 파괴


	if (wp.expired())
	{
		std::cout << "객체 파괴됨" << std::endl;
	}
	else
	{
		// 객체가 아직 파괴되지 않았으므로 wp를 사용해서
		// 멤버 함수를 호출하고 싶다.
		// wp->Go();	// error. 
						// weak_ptr은 객체에 접근할수 없다!!!

		// wp 가 가리키는 객체에접근하려면
		// 1. 참조계수를 늘리고 접근해야 합니다.
		// 2. 참조계수를 늘리는 방법은 shared_ptr 를 만들어야 합니다.
		std::shared_ptr<Car> sp = wp.lock();

		if (sp) // 유효 한지 다시 한번 확인하고
			sp->Go();
	}



	std::cout << "------" << std::endl;
}

