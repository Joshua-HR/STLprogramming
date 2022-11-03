#include <memory>
#include <string>
#include <iostream>

struct People
{
	std::string name;

	People(const std::string& n) : name(n) {}
	~People() { std::cout << name << " �ı�" << std::endl; }

	//===================================================
//	People* bf; // raw pointer. ����Ű�⸸ �ϰ� ��������� ���� ����
				// ��, ����Ű�� ���� delete �Ǿ����� �����Ҽ� ����.

	std::weak_ptr<People> bf; // ��������� �������� �ʴ� ����Ʈ ������
							  // ����Ű�� ���� delete �Ǿ����� ���簡��
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
		std::cout << "����Ű�� ��ü �ı���" << std::endl;
	}
	else
	{
		std::cout << "����Ű�� ��ü �ı� ���� ����" << std::endl;
	}
}


