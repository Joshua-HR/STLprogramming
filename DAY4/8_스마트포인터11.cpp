#include <iostream>
#include <thread>
#include <memory>

class Machine
{
	int data;
public:
	void run()
	{
		// ������� start ����
		std::thread t(&Machine::start, this); 
	}
	void start()
	{
		data = 10;
	}
};
int main()
{
	{
		std::shared_ptr<Machine> sp = std::make_shared<Machine>();
		sp->run();
	}
	int n;
	std::cin >> n; // ���� ����
}
