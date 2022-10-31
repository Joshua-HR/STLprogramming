// iterator1.cpp
#include <iostream>
#include <list>

int main()
{
	int x[5] = { 1,2,3,4,5 };

	// 배열은 1번째 요소를 가리키는 포인터만 있으면
	// 모든 요소를 열거 가능합니다.
	int* p = x;
	*p; 
	++p;


	std::list<int> s = { 1,2,3,4,5 };

	// STL 컨테이너는 요소를 가리키는 반복자만 있으면
	// 모든 요소를 열거 가능합니다.
	std::list<int>::iterator p2 = s.begin();
	*p2; 
	++p2;
}










