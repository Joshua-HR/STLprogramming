// 4_알고리즘과함수3   "3_algo1-1.cpp" 복사
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

// 조건자(predicator) : 반환 타입이 bool (또는 bool로 변환 가능)
//						인 함수

// find_if 의 3번째 인자는 "단항 조건자(unary predicator)" 이어야 합니다.

bool foo(int n)
{
	return n % 3 == 0;
}

int main()
{
	std::vector<int> v = { 1,9,3,1,2,3,1,2,3,1 };

	// 주어진 구간에서 "3"을 찾아라!
	auto p1 = std::find(v.begin(), v.end(), 3);

	// 주어진 구간에서 1번째 나오는 "3의 배수"을 찾아라!
	auto p2 = std::find_if(v.begin(), v.end(), foo);

	// std::find    : 값   검색, 3번째 인자로 "값" 전달
	// std::find_if : 조건 검색, 3번째 인자로 "함수" 전달


	// C++11 부터는 "함수를 직접 만들기 보다는"
	// "람다 표현식"을 권장합니다.

	// 람다표현식 : 함수이름(주소)가 필요한 자리에 익명의 함수를 직접
	//			  만드는 문법 -C++11 부터 지원되는 문법

	// [] : lambda introducer. 람다 표현식이 시작됨을 알리는 기호.
	auto p3 = std::find_if(v.begin(), v.end(), 
							[](int n) { return n % 3 == 0; });

}




