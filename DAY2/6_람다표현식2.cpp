// 5_함수객체10
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional> 
#include "show.h"

int main()
{
	std::vector<int> v = { 1,3,5,7,9,2,4,6,8,10 };

	// 동일한 람다 표현식이 여러번 사용된다면
	// 1. auto 변수에 담아서 사용하거나
	// 2. std::less 등을 사용하는 것이 좋습니다.

	// 아래 코드의 결과는 sort 함수가 3개 생성됩니다.
	// => 모든 람다 표현식은 다른 타입 입니다.
	std::sort(v.begin(), v.end(), [](int a, int b) { return a < b; });
									// class xxx{}; xxx();

	std::sort(v.begin(), v.end(), [](int a, int b) { return a < b; });
									// class yyy{}; yyy();

	std::sort(v.begin(), v.end(), [](int a, int b) { return a < b; });
									// class zzz{}; zzz();


	// 위 코드의 해결책1. 람다표현식을 auto 변수에 담아서 sort 에 사용
	auto cmp = [](int a, int b) { return a < b; };
				// class kkk{}; kkk();
	std::sort(v.begin(), v.end(), cmp);
	std::sort(v.begin(), v.end(), cmp);
	std::sort(v.begin(), v.end(), cmp);


	// 해결책 2. std::less 나 std::greater 같이 이미 만들어진 함수객체사용
	std::greater<int> f;
	std::sort(v.begin(), v.end(), f);
	std::sort(v.begin(), v.end(), f);
	std::sort(v.begin(), v.end(), f);

	// 아래 처럼해도 절대 나쁘지 않습니다.
	// => 객체 생성될때 생성자 호출이 계속 발생하면 느리지 않나요 ??
	// => "생성자가 하는일이 없습니다. 최적화 되어서 생성자 호출 안됩니다."
	// => 위 코드와 완전히 동일합니다. 절대 나쁜 코드 아닙니다.
	std::sort(v.begin(), v.end(), std::greater<int>());
	std::sort(v.begin(), v.end(), std::greater<int>());
	std::sort(v.begin(), v.end(), std::greater<int>());
}
// 함수에 다른 함수를 보낼때
// foo(일반함수) => 절대 치환 될수 없습니다. "인라인 함수라도"





