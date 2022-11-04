#include <iostream>
#include <chrono>
#include <thread>
using namespace std::chrono;

using namespace std::literals; // namespace ���� ���� ������ ������
					// �� namespace �� ���� �̷��� ���� ��� �մϴ�.
					// 3min, 3s, 3h ���� �ֽ��ϴ�.
					// "user define literal" ���� ã�� ������(C++11)

int main()
{
	// 1. predefined typedef
	std::chrono::hours		  h(1);   // typedef duration<int, ratio<3600,1>> hours;
	std::chrono::minutes      m  = h; // using minutes = ...
	std::chrono::seconds      s  = h;
	std::chrono::milliseconds ms = h;
	std::chrono::microseconds us = h;
	std::chrono::nanoseconds  ns = h;

	std::cout << h.count() << std::endl; // 1
	std::cout << m.count() << std::endl; // 60
	std::cout << s.count() << std::endl; // 3600
	std::cout << ms.count() << std::endl;
	std::cout << us.count() << std::endl;
	std::cout << ns.count() << std::endl;


	// 2. literals( h, min, s, ms, us, ns )
//	std::chrono::seconds s1 = 30;  // error.
	std::chrono::seconds s1(30);  // ok.. �̷��� �ص� �ǰ�
	std::chrono::seconds s2 = 30s; // �̷��� �ص� �˴ϴ�.
								   // seconds operator""s(30) ȣ��

	std::chrono::seconds s3 = 3min;// minutes operator""m(3);
									// 3�� ��ü

	std::cout << s3.count() << std::endl; // 180



	/*
	seconds sec = 1min;

	sec = 1min + 3s;
	sec += 40s;
	std::cout << sec.count() << std::endl;

	seconds sec2 = 1min + 3s;
	std::cout << sec2.count() << std::endl;
	*/
}