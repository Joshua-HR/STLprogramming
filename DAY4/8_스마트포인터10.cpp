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
	
	} // <= p �ı��ǹǷ� ��ü�� �ı�


	if (wp.expired())
	{
		std::cout << "��ü �ı���" << std::endl;
	}
	else
	{
		// ��ü�� ���� �ı����� �ʾ����Ƿ� wp�� ����ؼ�
		// ��� �Լ��� ȣ���ϰ� �ʹ�.
		// wp->Go();	// error. 
						// weak_ptr�� ��ü�� �����Ҽ� ����!!!

		// wp �� ����Ű�� ��ü�������Ϸ���
		// 1. ��������� �ø��� �����ؾ� �մϴ�.
		// 2. ��������� �ø��� ����� shared_ptr �� ������ �մϴ�.
		std::shared_ptr<Car> sp = wp.lock();

		if (sp) // ��ȿ ���� �ٽ� �ѹ� Ȯ���ϰ�
			sp->Go();
	}



	std::cout << "------" << std::endl;
}

