#include <memory>
#include <string>
#include <iostream>

struct People
{
	std::string name;

	People(const std::string& n) : name(n) {}
	~People() { std::cout << name << " ÆÄ±«" << std::endl; }

	std::shared_ptr<People> bf;
};

int main()
{
											// new People("kim")
	std::shared_ptr<People> sp1 = std::make_shared<People>("kim");
	std::shared_ptr<People> sp2 = std::make_shared<People>("lee");

}


