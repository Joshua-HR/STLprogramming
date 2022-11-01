#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> v = { 1,9,3,4 };

	// 주어진 구간에서 "3의 배수"를 찾고 싶다.

	auto ret1 = std::find_if(v.begin(), v.end(), 
							[](int n) { return n % 3 == 0; });

	int k = 3;

	// 주어진 구간에서 "k의 배수"를 찾고 싶다.
	// => 람다 표현식은 "클로져" 입니다. ( 지역변수 캡쳐 기능이 있다는것)
	// => [] 안에 캡쳐할 지역변수를 넣으면 됩니다. [a, b, c]
	auto ret2 = std::find_if(v.begin(), v.end(),
							[k](int n) { return n % k == 0; });

}