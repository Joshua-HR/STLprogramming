#include <iostream>
#include <thread>
#include <memory>

// enable_shared_from_this �� ���� ��� ������
// 1. �ܺο��� ����� ���� shared_ptr ��ü�� ����ϴ� ������ü��
// 2. shared_from_this() �Լ��� ���� �Ҽ� �ֽ��ϴ�.

class Machine : public std::enable_shared_from_this<Machine>
{
	int data;
	std::shared_ptr<Machine> holdme; // �ڽ��� ��������� �����ϱ� ���� ����
									//  ��� ����Ÿ
public:
	~Machine() { std::cout << "~Machine" << std::endl; }

	void run( )
	{
//		holdme = this;  // error. �̰�.	
						// ������ �ƴ϶�, ������ ������ü�� �����˴ϴ�. �߸��� �ڵ�

		holdme = shared_from_this();	// main �Լ��� �ִ�
										// sp �� ���� ������ü�� �����մϴ�.
		// ������� start ����
		std::thread t(&Machine::start, this); 
		t.detach();
	}

	void start()
	{
		data = 10;

		std::cout << "finish start" << std::endl;
		holdme.reset(); // Machine �ı�. �Ҹ��� ȣ��
	}
};

int main()
{
	{
		std::shared_ptr<Machine> sp = std::make_shared<Machine>();
		sp->run( );
	}
	int n;
	std::cin >> n; // ���� ����
}


/*
int* p = new int;

std::shared_ptr<int> sp1(p);
//std::shared_ptr<int> sp2(p); // sp1���� �ٸ� ������ü!
std::shared_ptr<int> sp2(sp1); // �̷��� �ؾ� sp1�� ���� ��ü ����
*/