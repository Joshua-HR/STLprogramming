#include <iostream>
#include <thread>
#include <atomic>
// atomic

//int x = 0;

std::atomic<int> x = 0;

void foo()
{
	for (int i = 0; i < 1000000; i++)
	{
		++x;	// x.operator++() 호출
				// 내부적으로 "lock" 등의 어셈블리 로 구현
				// cpu 의 동기화 기능으로 구현
	}
}


int main()
{
	std::thread t1(&foo);
	std::thread t2(&foo);
	std::thread t3(&foo);
	t1.join();
	t2.join();
	t3.join();

	std::cout << x << std::endl;
}