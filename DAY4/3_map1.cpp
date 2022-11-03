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
	// => 반복자는 "요소를 가리키는 포인터" 역활 입니다.
	// => map 의 요소는 pair 입니다.
	auto p = m.find("wed"); // find(키값)

	// 따라서, map 의 반복자는 "pair 를 가리키는 포인터"라고 생각하세요
	// p를 사용해서 "wed : 수요일" 이라고 출력해보세요

	std::cout << p->first << " : " << p->second << std::endl;

	//=======================================
	// 핵심 : [] 연산자
	// => 
	std::string s = m["sun"];
					// 1. "sun" 키값이 있으면 value값 반환
					// 2. "sun" 키값이 없으면 
					//    {"sun", ""} 로 새로운 항목 추가

	// 따라서, map 에 특정 키값이 있는지 조사할때
	// 아래 처럼 하지 마세요
	// => 조사만 하는 것이 아니라 항목을 생성하는 것 입니다.
	if (m["sat"] != "")
	{
	}

	// 아래 처럼 해야 합니다.
	if (m.find("sat") != m.end())
	{
	}

	// C++20 에서 좀더 편리한 멤버 함수가 나옵니다.
//	if (m.contains("sat")) {}

}




