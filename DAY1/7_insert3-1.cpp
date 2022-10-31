#include <iostream>
#include <list>
#include <iterator>

int main(int argc, char** argv)
{
	std::list<int> s1 = { 1, 2, 3, 4, 5 };
	std::list<int> s2 = { 0, 0, 0, 0, 0 };


	// 결과 예측해 보세요
//	std::copy(s1.begin(), s1.end(), std::back_inserter(s2));
		// => 0, 0, 0, 0, 0, 1, 2, 3, 4, 5

//	std::copy(s1.begin(), s1.end(), std::front_inserter(s2));
		// => 5, 4, 3, 2, 1, 0, 0, 0, 0, 0


	std::copy(s1.begin(), s1.end(), std::inserter(s2, s2.begin()));
		// => 1, 2, 3, 4, 5, 0, 0, 0, 0, 0

	for (auto& n : s2)
		std::cout << n << ", ";
}
