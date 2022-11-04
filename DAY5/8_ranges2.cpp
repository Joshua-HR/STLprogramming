#include <iostream>
#include <vector>
#include <ranges> 
#include <algorithm>


// 아래 클래스가 핵심 입니다.
template<typename T>
class take_view
{
	T& range;
	int count;
public:
	take_view(T& r, int c) : range(r), count(c) {}

	auto begin() { return range.begin(); }
	auto end()   { return range.begin() + count; }
};
template<typename T>
class reverse_view
{
	T& range;
public:
	reverse_view(T& r) : range(r){}

	auto begin() { return range.rbegin(); }
	auto end() { return range.rend(); }
};


int main()
{
	std::vector<int> v = {1,2,3,4,5,6,7,8,9,10 };

//	take_view tv(v, 5); // C++17 이후, 타입 인자 생략가능
//	for (auto n : v) 
//	for (auto n : tv)
//	for (auto n : take_view(v, 5))
	for (auto n : reverse_view(v))
		std::cout << n << ", ";

}