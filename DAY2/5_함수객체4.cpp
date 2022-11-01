#include <iostream>
#include <vector>
#include <algorithm>

bool fn(int n) { return n % 3 == 0; }

int main()
{
	std::vector<int> v = { 1,2,9,3,4,5,6,7,8 };


	// 주어진 구간에서 "3의 배수"를 찾고싶다.
	// => 3번째 인자로 "단항 조건자 전달"
	auto ret1 = std::find_if(v.begin(), v.end(), fn);


	int k;
	std::cin >> k;

	// 주어진 구간에서 처음 나오는 "k의 배수"를 찾고 싶다.
	auto ret2 = std::find_if(v.begin(), v.end(), ?? );

}