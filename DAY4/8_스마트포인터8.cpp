#include <memory>
#include <string>
#include <iostream>

struct People
{
	std::string name;

	People(const std::string& n) : name(n) {}
	~People() { std::cout << name << " �ı�" << std::endl; }

	//===================================================
//	std::shared_ptr<People> bf; // ��������� ����

	People* bf; // raw pointer. ����Ű�⸸ �ϰ� ��������� ���� ����
};

int main()
{
	std::shared_ptr<People> sp1 = std::make_shared<People>("kim");
	std::shared_ptr<People> sp2 = std::make_shared<People>("lee");

	sp1->bf = sp2.get();
	sp2->bf = sp1.get();
}

// ������ ���ڵ�� ������ �ֽ��ϴ�.
// => ���� ����(8-1��)

