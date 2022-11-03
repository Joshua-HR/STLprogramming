#include <iostream>
#include <unordered_set>
#include "show.h"

struct People
{
	std::string name;
	int  age;

	People(std::string n, int a) : name(n), age(a) {}
};
// People 객체의 해쉬값을 구하는 함수 객체
struct PeopleHash
{
	inline int operator()(const People& p) const
	{
		std::hash<std::string> hs;
//		std::hash<int> hi;
//		return hs(p.name) + hi(p.age);
		return hs(p.name);
	}
};
// People 안에 == 연산자를 재정의 했거나
// 아니면 상등을 비교 하는 함수 객체 제공
struct PeopleEqual
{
	inline bool operator()(const People& p1, const People& p2) const
	{
		return p1.name == p2.name && p1.age == p2.age;
	}
};
int main()
{
	// 핵심 : 사용자 정의 타입을 unordered(hash) 에 넣기

	std::unordered_set<People, PeopleHash, PeopleEqual> s;

	s.emplace("kim", 20); // s.insert( People("kim",20))
	s.emplace("lee", 25);
	s.emplace("park", 30);


	People peo("lee", 25);
	auto p = s.find( peo );

	std::cout << (*p).name << std::endl;
}

