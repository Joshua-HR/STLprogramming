#include <iostream>
#include <vector>
#include <algorithm>

// show 를 만들어 봅시다.
// 1. Container 버전
template<typename Container>
void show(const Container& c)
{
	// 컨테이너의 모든 요소를 출력하는 방법중 제일 좋은 것은
	// C++11 의 range for 입니다.
	for (auto e : c)
	{
		std::cout << e << ", ";
	}
	std::cout << std::endl;
}
// 2. 반복자 버전
// => 반복자는 크기가 작은 타입입니다. 
//    "call by value" 를 사용해도 나쁘지 않습니다.
// Container::value_type  => "컨테이너가 저장하는 타입"
// Iterator::value_type  => "반복자가 가리키는 타입"

template<typename Iter>
void show(Iter first, Iter last)
{
	std::ostream_iterator< typename Iter::value_type > p(std::cout, ", ");

	std::copy(first, last, p);

	std::cout << std::endl;
}

int main()
{
	std::vector<int> v = { 1,2,3,4,5 };

	show(v);
	show(v.begin(), v.end());
}

