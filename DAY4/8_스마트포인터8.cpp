#include <memory>
#include <string>
#include <iostream>

struct People
{
	std::string name;

	People(const std::string& n) : name(n) {}
	~People() { std::cout << name << " 파괴" << std::endl; }

	//===================================================
//	std::shared_ptr<People> bf; // 참조계수가 증가

	People* bf; // raw pointer. 가리키기만 하고 참조계수는 증가 안함
};

int main()
{
	std::shared_ptr<People> sp1 = std::make_shared<People>("kim");
	std::shared_ptr<People> sp2 = std::make_shared<People>("lee");

	sp1->bf = sp2.get();
	sp2->bf = sp1.get();
}

// 하지만 이코드는 문제가 있습니다.
// => 다음 예제(8-1번)

