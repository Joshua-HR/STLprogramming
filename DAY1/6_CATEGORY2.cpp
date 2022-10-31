#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
#include <algorithm>

// 53page 표의 내용입니다.

// 입력 반복자 : =*p(입력), ++
// 출력 반복자 : *p=(출력), ++

// 위 2개는 멀티 패스를 보장하지 않고
// ===========================================
// 아래3개는 멀티 패스를 보장합니다

// 전진형 반복자 : 입력, ++				싱글리스트의 반복자
// 양방향 반복자 : 입력, ++, --			더블리스트의 반복자

// 임의접근 반복자 : 입력, ++, --, +, -, [],	연속된 메모리와 유사한 구조
//											vector 의 반복자
// 
// continuous iterator ( C++17 에서 추가) 아직은 널리 사용되지 않음.







int main()
{
	std::forward_list<int> s1 = { 1,2,3 };
	std::list<int> s2 = { 1,2,3 };
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	auto p = std::find(std::begin(v), std::end(v), 5);
}