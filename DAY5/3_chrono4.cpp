#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <chrono>
#include <ctime>
#include <string>

// system_clock : ���� �ð��� ������ ����ϴ� Ŭ����, non monotonic clock
// time_point   : �ð��� �������� duration<>�� �����ϴ� Ŭ����
//				  ex) 1970�� 1�� 1�� ���� 16880 �ð� ���
//				epoch_time : 1970�� 1�� 1�� ����

int main()
{
	// 1. ���� �ð��� ��� ���
	// => std::chrono::system_clock::now(); "now" ��� static ����Լ�

	std::chrono::system_clock::time_point tp = std::chrono::system_clock::now();


	// 2. time_point => duration ����... ���е��� �������� ��� ����� ĳ���� �ʿ�..
	// => �Ʒ� �ڵ�� ���� �ð��� "1970.1.1" �� �������� "nano��" �� "��" �� ��� �ڵ�
	std::chrono::nanoseconds nanosec = tp.time_since_epoch();
	std::chrono::seconds     sec     = std::chrono::duration_cast<std::chrono::seconds>(tp.time_since_epoch());
	
	std::cout << nanosec.count() << std::endl;
	std::cout << sec.count() << std::endl;


	// 3. C++ ǥ�ؿ� "days" Ÿ���� ��� �Ʒ� ��������ϴ�.
	// => C++23 �� �߰��˴ϴ�.
	using days = std::chrono::duration<int, std::ratio<60 * 60 * 24>>;


	std::cout << (std::chrono::duration_cast<days>(tp.time_since_epoch())).count() << std::endl;


	// 3. time_point => Į���� ������ ��¥�� �����ϱ�
	time_t t = std::chrono::system_clock::to_time_t(tp); // 1. time_point => struct time_t
	std::string s = ctime(&t);					// 2. struct time_t => char*
	std::cout << s << std::endl;
}



