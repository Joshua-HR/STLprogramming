#include <iostream>
#include <vector>
#include <functional>
#include <algorithm> // find,sort, reverse, replace 등의 알고리즘
#include <numeric>	 // accumulate 등의 수치 알고리즘

int main()
{
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	// std::accumulate : 주어진 구간의 합을 구하는 알고리즘
	int n = std::accumulate(v.begin(), v.end(), 0);

	std::cout << n << std::endl; // 55


	// 수치 알고리즘들은 "연산"을 변경할수 있습니다.
	// => 마지막 인자로 이항 함수를 전달해서 2개요소에 어떤 연산을 할지 변경가능
	int n1 = std::accumulate(v.begin(), v.end(), 1, 
							[](int a, int b) { return a * b; });

	std::cout << n1 << std::endl; // 3,628,800

	// C++11 이전에는 람다 표현식이 없었습니다.
	// 그래서 <functional> 헤더에 사칙 연산을 위한 함수객체가 제공됩니다.
	std::plus<int> f1;
	std::minus<int> f2;
	std::multiplies<int> f3;
	std::divides<int> f4;

	int n3 = f3(3, 4); // 3 * 4

	int n4 = std::accumulate(v.begin(), v.end(), 1,
										std::multiplies<int>());

	std::cout << n4 << std::endl;

}
