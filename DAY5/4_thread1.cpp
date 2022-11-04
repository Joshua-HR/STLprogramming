#include <iostream>
#include <thread> 
#include <chrono>

// �ٽ� 1. this_thread namespace 
// => 4���� ��ƿ��Ƽ�� �Լ��� �ֽ��ϴ�.

int main()
{
	// 1. thread id ���ϱ�
	std::cout << std::this_thread::get_id() << std::endl;

	// 2. Ư�� �ð� "����" ���� ������ ����
//	std::this_thread::sleep_for(10);  // error. ���ڴ� chrono Ÿ���Դϴ�.

	std::this_thread::sleep_for(std::chrono::seconds(10)); 
						// ���1. �ð� Ÿ���� �ӽð�ü�� ����

	using namespace std::literals;
	std::this_thread::sleep_for( 10s ); // ��� 2. user define literal


	// 3. Ư�� �ð� "����" ����
	std::this_thread::sleep_until(std::chrono::system_clock::now() + 200s);
	
	// 4. ���� �����尡 �����Ҽ� �ִ� �ð��� �ٸ� �����忡 �纸
	std::this_thread::yield();
}


