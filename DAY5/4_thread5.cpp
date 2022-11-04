#include <iostream>
#include <thread>
#include <future> 
#include <chrono>
using namespace std::chrono;
using namespace std::literals;


// foo �� promise �� ����� ��� �� ��ȯ
void foo(std::promise<int>& pro)
{
	std::this_thread::sleep_for(5s);

	pro.set_value(100); 
}

// �����带 ������� �ʰ� ���� �Լ��� "return ��" ���� ����� �����մϴ�.
int goo()
{
	std::this_thread::sleep_for(5s);
	return 100;
}
int main()
{
	// �Լ��� �񵿱�(������)�� �����ϰ� ������� ���� future ��ȯ
	std::future ft = std::async(&goo);

	std::cout << "main ��� ����" << std::endl;

	int ret = ft.get();
	std::cout << "result : " << ret << std::endl;

}


