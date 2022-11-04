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

	// 2. duration �� ����ؼ� �Ÿ��� ��Ÿ���� Ÿ���� ������ ���ô�.
	using Meter      = std::chrono::duration<int, std::ratio<1, 1>>;
	using CentiMeter = std::chrono::duration<int, std::ratio<1, 100>>;
	using MilliMeter = std::chrono::duration<int, std::ratio<1, 1000>>;
//	using KiloMeter  = std::chrono::duration<int, std::ratio<1000, 1>>;
	using KiloMeter  = std::chrono::duration<int, std::kilo>;

	Meter me(1230); // 1230m

	CentiMeter cm(me);
	std::cout << cm.count() << std::endl; // 123000cm

	// Meter ��ü�� => KiloMeter ��ü��.. 
	// => ����Ÿ �ս��� ���ɼ� ����
	KiloMeter km = me; // error
	KiloMeter km = std::chrono::duration_cast<KiloMeter>(me);

	std::cout << km.count() << std::endl;

	//===================
	// �ð� Ÿ���� ����� ���ô�.
	using seconds = std::chrono::duration_cast<int, std::ratio<1, 1>>;
	using minutes = std::chrono::duration_cast<int, std::ratio<?>>;
	using hours   = std::chrono::duration_cast<int, std::ratio<?>>;
}
