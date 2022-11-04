#include <iostream>
#include <thread>
#include <mutex>

// C++ 표준은 mutex 도 제공합니다.
std::mutex m;
int shared_data = 10;

/*
void foo()
{
	m.lock();
	// 공유 자원 사용	
	shared_data = 200;
	m.unlock();
}
*/

// 동기화 자원 사용시 절대로 위처럼 직접 lock/unlock 하지 마세요
// lock 를 관리하는 도구를 사용하세요
void foo()
{
	{
		std::lock_guard<std::mutex> g(m);	// 1. 내부적으로 m 보관
		// 2. 생성자에서 m.lock()

		shared_data = 200;

	}



} // <== g 파괴. 소멸자에서 m.unlock()




int main()
{
	std::thread t1(&foo);
	std::thread t2(&foo);

	t1.join();
	t2.join();
}

