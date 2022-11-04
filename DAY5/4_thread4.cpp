#include <iostream>
#include <thread>
#include <future> 
#include <chrono>
using namespace std::chrono;
using namespace std::literals;

// ������ �Լ��� ���� ������� �ֽ�����(main�Լ�)�� �����ϰ� �ͽ��ϴ�.
// ��� 1. promise & future

void foo( std::promise<int>& pro)
{
	std::this_thread::sleep_for(5s);

	// �ֽ����忡 ����� �˷��ش�.
	pro.set_value(100); // �� ���� future ��ü�� 100�� �ְ� �˴ϴ�.

//	throw 1; // ���ܴ� �����庰�� ó�� �˴ϴ�.
			 // �̷��� �ϸ� �ֽ����忡 ���ܰ� ���޵��� �ʽ��ϴ�.

//	pro.set_exception(0); // �ֽ����忡 ���� ����
}


int main()
{
	// 1. promise ��ü�� �����
	std::promise<int> pro;

	// 2. promise �ȿ��� �̷��� ����� ���� future ��ü�� �����ϴ�.
	std::future ft = pro.get_future();

	// 3. ������ �Լ��� promise ��ü�� ������ ����
	std::thread t(&foo, std::ref(pro));
			
	// main ���� ���ϴ� �۾� ������..

	// ��� ���
	int ret = ft.get(); // ����� ��� �ö� ���� ���

	std::cout << "result : " << ret << std::endl;

	t.join();
}


