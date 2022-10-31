#include <iostream>
#include <list>   
#include <vector>

int main()
{
//	std::list<int>   s = { 1,2,3,4,5 };
//	std::vector<int> s = { 1,2,3,4,5 };
	int s[5] = { 1,2,3,4,5 };



	// 핵심 1. 반복자 타입
	// 단점 1. 코드가 복잡해 보입니다.
	// 단점 2. 컨테이너 변경시 반복자 타입도 변경해야 합니다.
//	std::list<int>::iterator p1 = s.begin();


	// C++11 이후 라면 아래 처럼 사용하세요. 권장.
	auto p2 = s.begin();


	// 핵심 2. 반복자를 꺼내는 법
//	auto p3 = s.begin();	// 1. 멤버 함수 begin 사용
							// 단점 : s 가 "raw array" 인 경우 error

	auto p4 = std::begin(s); // 2. 일반 함수 begin() 사용
							// s 가 "raw array" 인 경우도 가능..
							// 이 경우 p4 는 "int* p4"
}



