#include <iostream>
#include <thread> 

void foo(int n, double d)
{
	std::cout << "foo" << std::endl;
}

class Test
{
public:
	void goo(int n, double d)
	{
		std::cout << "goo" << std::endl;
	}
};

int main()
{
	// C++ 에서 스레드를 생성하는 방법
	std::thread t1(&foo, 3, 4.5);	// 이순간 스레드 생성

	// 스레드를 생성한 경우 반드시 아래 2개중 한개를 해야 합니다.
	// 1. 스레드 종료를 대기하거나 ( join )
	// 2. 스레드를 떼어 내거나(detach);

	t1.join();   // 새로운 스레드가 종료될때 까지 대기
//	t1.detach(); // 새로운 스레드 분리
				 // 이 경우 주스레드 종료시 모든 새로운 스레드는 강제종료!
}


