#include <iostream>
#include <list>
#include <algorithm>

int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7,3,9,10 };

	// 역반복자를 만드는 방법 1. 클래스를 직접 사용
	std::reverse_iterator< std::list<int>::iterator > p1( s.end() );


	// 방법 2. 역반복자를 만드는 함수를 사용 
	auto p2 = std::make_reverse_iterator(s.end());
	auto p3 = std::make_reverse_iterator(s.begin());


	// 방법 3. 컨테이너의 rbegin(), rend() 멤버 함수 사용
	auto p4 = s.rbegin(); // std::make_reverse_iterator(s.end()) 와 동일
	auto p5 = s.rend();   // std::make_reverse_iterator(s.begin());

}






