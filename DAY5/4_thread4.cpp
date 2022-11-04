#include <iostream>
#include <thread>
#include <future> 
#include <chrono>
using namespace std::chrono;
using namespace std::literals;

// 스레드 함수의 수행 결과값을 주스레드(main함수)에 전달하고 싶습니다.
// 방법 1. promise & future

void foo( std::promise<int>& pro)
{
	std::this_thread::sleep_for(5s);

	// 주스레드에 결과를 알려준다.
	pro.set_value(100); // 이 순간 future 객체에 100을 넣게 됩니다.

//	throw 1; // 예외는 스레드별로 처리 됩니다.
			 // 이렇게 하면 주스레드에 예외가 전달되지 않습니다.

//	pro.set_exception(0); // 주스레드에 예외 전달
}


int main()
{
	// 1. promise 객체를 만들고
	std::promise<int> pro;

	// 2. promise 안에서 미래의 결과를 담은 future 객체를 꺼냅니다.
	std::future ft = pro.get_future();

	// 3. 스레드 함수에 promise 객체를 참조로 전달
	std::thread t(&foo, std::ref(pro));
			
	// main 에서 원하는 작업 수행후..

	// 결과 대기
	int ret = ft.get(); // 결과가 들어 올때 까지 대기

	std::cout << "result : " << ret << std::endl;

	t.join();
}


