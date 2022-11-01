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

}




