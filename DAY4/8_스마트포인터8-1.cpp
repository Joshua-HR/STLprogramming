#include <memory>
#include <string>
#include <iostream>

struct People
{
	std::string name;

	People(const std::string& n) : name(n) {}
	~People() { std::cout << name << " �ı�" << std::endl; }

	//===================================================
	People* bf; // raw pointer. ����Ű�⸸ �ϰ� ��������� ���� ����
};

int main()
{
	std::shared_ptr<People> sp1 = std::make_shared<People>("kim");

	{
		std::shared_ptr<People> sp2 = std::make_shared<People>("lee");

		sp1->bf = sp2.get();
		sp2->bf = sp1.get();

	} // <== sp2 �ı�. lee ��ü delete ��

	// sp1->bf �� 0�� �ƴ϶� �и� �ּҰ� �ֽ��ϴ�.
	// ������ �� �ּҰ� ����Ű�� ���� ��ü�� �ı� �Ǿ����ϴ�.
	// "dangling pointer �߻�!!"

	if (sp1->bf != nullptr)
	{
		// �Ʒ� �ڵ�� runtime error. 
		std::cout << sp1->bf->name << std::endl;
	}
}

// ����Ʈ �������� ��ǥ
// 1. �ڿ� �ڵ� ����
// 2. dangling pointer �� ���� �߻����� �ʵ���!
//    (��ü �ı� ���� ���� ����)

