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
	// => ?? 자리에 "단항 조건자함수 + k값"을 같이 전달해야 합니다.
	auto ret2 = std::find_if(v.begin(), v.end(), ?? );
}
// 용어 정리
// 일급 객체(first-class object)
// => 함수의 인자로 사용가능한 객체
// => C/C++ 은 "함수" 도 함수의 인자로 전달가능하므로 
//    "함수" 도 일급 객체이다.


// 클로져(Closure)
// => "함수 + 문맥에 속한 지역변수" 를 같이 인자로 전달 가능한 도구
// => C/C++ 의 일반 함수는 "일급 객체" 이지만 "클로져" 가 될수 없습니다.