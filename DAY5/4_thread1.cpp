#include <iostream>
#include <thread> 
#include <chrono>

// 핵심 1. this_thread namespace 
// => 4개의 유틸리티성 함수가 있습니다.

int main()
{
	// 1. thread id 구하기
	std::cout << std::this_thread::get_id() << std::endl;

	// 2. 특정 시간 "동안" 현재 스레드 재우기
//	std::this_thread::sleep_for(10);  // error. 인자는 chrono 타입입니다.

	std::this_thread::sleep_for(std::chrono::seconds(10)); 
						// 방법1. 시간 타입을 임시객체로 전달

	using namespace std::literals;
	std::this_thread::sleep_for( 10s ); // 방법 2. user define literal


	// 3. 특정 시간 "까지" 재우기
	std::this_thread::sleep_until(std::chrono::system_clock::now() + 200s);
	
	// 4. 현재 스레드가 실행할수 있는 시간을 다른 스레드에 양보
	std::this_thread::yield();
}


