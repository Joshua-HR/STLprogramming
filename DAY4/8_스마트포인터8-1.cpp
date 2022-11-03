#include <memory>
#include <string>
#include <iostream>

struct People
{
	std::string name;

	People(const std::string& n) : name(n) {}
	~People() { std::cout << name << " 파괴" << std::endl; }

	//===================================================
	People* bf; // raw pointer. 가리키기만 하고 참조계수는 증가 안함
};

int main()
{
	std::shared_ptr<People> sp1 = std::make_shared<People>("kim");

	{
		std::shared_ptr<People> sp2 = std::make_shared<People>("lee");

		sp1->bf = sp2.get();
		sp2->bf = sp1.get();

	} // <== sp2 파괴. lee 객체 delete 됨

	// sp1->bf 는 0이 아니라 분명 주소가 있습니다.
	// 하지만 그 주소가 가리키는 곳의 객체는 파괴 되었습니다.
	// "dangling pointer 발생!!"

	if (sp1->bf != nullptr)
	{
		// 아래 코드는 runtime error. 
		std::cout << sp1->bf->name << std::endl;
	}
}

// 스마트 포인터의 목표
// 1. 자원 자동 삭제
// 2. dangling pointer 를 절대 발생하지 않도록!
//    (객체 파괴 여부 조사 가능)

