#include <memory>
#include <string>
#include <iostream>

struct People
{
	std::string name;

	People(const std::string& n) : name(n) {}
	~People() { std::cout << name << " �ı�" << std::endl; }

	std::shared_ptr<People> bf; // best friend ��� �ǹ�.
};

int main()
{
											// new People("kim")
	std::shared_ptr<People> sp1 = std::make_shared<People>("kim");
	std::shared_ptr<People> sp2 = std::make_shared<People>("lee");

	sp1->bf = sp2; 
	sp2->bf = sp1;
}


