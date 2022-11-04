#include <iostream>
#include <thread>
#include <future> 
#include <chrono>
using namespace std::chrono;
using namespace std::literals;


// foo 는 promise 를 사용한 결과 값 반환
void foo(std::promise<int>& pro)
{
	std::this_thread::sleep_for(5s);

	pro.set_value(100); 
}

// 스레드를 고려하지 않고 만든 함수는 "return 값" 으로 결과를 전달합니다.
int goo()
{
	std::this_thread::sleep_for(5s);
	return 100;
}
int main()
{
	// 함수를 비동기(스레드)로 실행하고 결과값을 담을 future 반환
	std::future ft = std::async(&goo);

	std::cout << "main 계속 실행" << std::endl;

	int ret = ft.get();
	std::cout << "result : " << ret << std::endl;

}


