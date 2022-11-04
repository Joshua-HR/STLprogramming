#include <iostream>
#include <chrono>
using namespace std::chrono;

// duration ���� : Ư�� ������ ����(tick count)�� ǥ���ϴ� �ڷᱸ��
//				  10�� => 1���� 10��
//					   => 1/1000���� 10000��..

// => �Ѱ� ���� �����մϴ�.
// => ���ø� 2��° ���ڷ� ������ �����մϴ�.
//    ������ �ٸ��� �ٸ� �Դϴ�.

int main()
{
	// 1. duration ���
	std::chrono::duration<int, std::ratio<1, 100>>  d1(2); 
	std::chrono::duration<int, std::ratio<1, 1000>> d2(d1); // 20

	std::cout << d2.count() << std::endl; // 20

}
