#include <map>  
#include "show.h"

// map : pair 를 저장하는 set,   
//       key 값으로 value 를 저장

int main()
{
	std::map<std::string, std::string> m;

	// 요소 넣기
	// 1. pair 만들어서 넣기
	std::pair<std::string, std::string> p1("mon", "월요일");

	m.insert(p1);

	// 2. make_pair
	m.insert(std::make_pair("tue", "화요일"));

	// 3. emplace - 사용자 정의타입에서 배웁니다.
	m.emplace("wed", "수요일");

	// 4. [] 연산자 사용 - 이 방법이 널리 사용됩니다.
	m["thu"] = "목요일";


	//------------------------
	
	// 반복자에 대해서
	auto p = m.find("wed"); // find(키값)

	// p를 사용해서 "wed : 수요일" 이라고 출력해보세요

	// [] 연산자
	std::cout << m["sun"] << std::endl; 
}




