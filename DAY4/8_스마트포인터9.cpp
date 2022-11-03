#include <memory>
#include <string>
#include <iostream>

struct People
{
	std::string name;

	People(const std::string& n) : name(n) {}
	~People() { std::cout << name << " 파괴" << std::endl; }

	//===================================================
//	People* bf; // raw pointer. 가리키기만 하고 참조계수는 증가 안함
				// 단, 가리키는 곳이 delete 되었는지 조사할수 없음.

	std::weak_ptr<People> bf; // 참조계수가 증가하지 않는 스마트 포인터
							  // 가리키는 곳이 delete 되었는지 조사가능
};

int main()
{
	std::shared_ptr<People> sp1 = std::make_shared<People>("kim");
	{
		std::shared_ptr<People> sp2 = std::make_shared<People>("lee");

		sp1->bf = sp2;
		sp2->bf = sp1;
	} 

	if ( sp1->bf.expired() )
	{
		std::cout << "가리키는 객체 파괴됨" << std::endl;
	}
	else
	{
		std::cout << "가리키는 객체 파괴 되지 않음" << std::endl;
	}
}


