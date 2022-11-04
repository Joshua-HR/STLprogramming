#include <iostream>
#include <thread>
#include <mutex>

// C++ ǥ���� mutex �� �����մϴ�.
std::mutex m;
int shared_data = 10;

/*
void foo()
{
	m.lock();
	// ���� �ڿ� ���	
	shared_data = 200;
	m.unlock();
}
*/

// ����ȭ �ڿ� ���� ����� ��ó�� ���� lock/unlock ���� ������
// lock �� �����ϴ� ������ ����ϼ���
void foo()
{
	{
		std::lock_guard<std::mutex> g(m);	// 1. ���������� m ����
		// 2. �����ڿ��� m.lock()

		shared_data = 200;

	}



} // <== g �ı�. �Ҹ��ڿ��� m.unlock()




int main()
{
	std::thread t1(&foo);
	std::thread t2(&foo);

	t1.join();
	t2.join();
}

