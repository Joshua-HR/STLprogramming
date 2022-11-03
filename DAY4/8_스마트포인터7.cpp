#include <memory>
#include <string>
#include <iostream>

struct People
{
	std::string name;

	People(const std::string& n) : name(n) {}
	~People() { std::cout << name << " 파괴" << std::endl; }

	std::shared_ptr<People> bf; // best friend 라는 의미.
};

int main()
{
											// new People("kim")
	std::shared_ptr<People> sp1 = std::make_shared<People>("kim");
	std::shared_ptr<People> sp2 = std::make_shared<People>("lee");

	// 상호 참조(원형 참조, cycle reference) 라고 합니다.
	// 스마트 포인터 사용시 cycle reference 가 발생하면 자원 누수 입니다.
	sp1->bf = sp2; 
	sp2->bf = sp1;
}


