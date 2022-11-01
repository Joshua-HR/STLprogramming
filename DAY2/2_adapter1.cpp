#include <iostream>
#include <list>
#include <algorithm>

int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7,3,9,10};

	auto p1 = s.begin();
	auto p2 = s.end();

	// std::reverse_iterator< 반복자타입 > p3( 반복자 );

	std::reverse_iterator< std::list<int>::iterator > p3(p2); // p2 한개 앞을 가리키는 역반복자.
	

	std::cout << *p3 << std::endl; // 10.. 제일 마지막 요소
	++p3; // 거꾸로(왼쪽 <= 오른쪽) 으로 이동

	std::cout << *p3 << std::endl; // 9

}
