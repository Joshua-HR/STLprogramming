#include <iostream>
#include <vector>
#include <list>
#include <iterator>

int main()
{
//	std::vector<int> s = { 1,2,3,4,5,6,7,8,9,10 };
	std::list<int>   s = { 1,2,3,4,5,6,7,8,9,10 };

	auto p = s.begin(); // std::begin(s);

	// 반복자 p를 5칸 전진하고 싶다.
	// 방법 1. + 연산자 사용
	// => 임의접근(random access iterator) 만 가능.
	// p = p + 5;

	// 방법 2. ++ 연산자 사용
	// => 모든 종류의 반복자 사용가능
	// => 하지만, p가 임의 접근 반복자라면 "성능 저하"
	// ++p; ++p; ++p; ++p; ++p;

	// 방법 3. std::advance() 사용. 가장 좋은 방법
	std::advance(p, 5); // p가 임의 접근이면 +5 로 이동
						// 아닌경우,  ++를 5회 실행

	
	std::cout << *p << std::endl;
}