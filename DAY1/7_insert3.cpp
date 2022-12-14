#include <iostream>
#include <list>
#include <iterator>

// 삽입반복자종류

int main(int argc, char** argv)
{
	std::list<int> s = {    0, 0, 0, 0, 0     };


	// 핵심 1.  삽입반복자는 3가지가 있습니다.
	// 전방 삽입, 후방 삽입, 임의 삽입
	// 임의 삽입의 경우, 어느 위치에 넣을지 반복자를 전달해야 합니다.

//	std::front_insert_iterator< std::list<int> > p1(s);
//	std::back_insert_iterator< std::list<int> >  p2(s);
//	std::insert_iterator< std::list<int> > p3(s, ++s.begin());

	// 핵심 2. 삽입반복자 만들때 함수 버전을 사용하는 것이 편리합니다.
	auto p1 = std::front_inserter(s);
	auto p2 = std::back_inserter(s);
	auto p3 = std::inserter(s, ++s.begin());


	*p1 = 10; // s.push_front(10)
	*p2 = 20; // s.push_back(20);
	*p3 = 30; // s.insert(++s.begin(), 30);


	for (auto& n : s)
		std::cout << n << ", ";
}
