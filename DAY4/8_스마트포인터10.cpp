#include <iostream>
#include <memory>

// �ٽ� : weak_ptr �� �ڼ��� ���� ���ô�.

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
		
		// �ٽ� 1. �Ʒ� 2���� ������
		// => ���� ���, ��ü �ı� ������
		// sp = p; 
		wp = p; // weak ������ shared ���� �����մϴ�.
		
		std::cout << p.use_count() << std::endl; // 
	}

	std::cout << "------" << std::endl;
}

