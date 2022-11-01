// 5_함수객체10
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional> // std::less<>, std::greater<> 등의 함수객체제공
#include "show.h"

inline bool cmp1(int a, int b) { return a < b; }

int main()
{
	std::vector<int> v = { 1,3,5,7,9,2,4,6,8,10 };


	// std::sort() 사용하기 
	// 방법 1. 비교 정책을 전달하지 않으면 
	// => 오름 차순 입니다.
	std::sort( v.begin(), v.end() ); //  1,2,3,4,5,6,7,8,9


	// 방법 2. 3번째 인자로 비교 정책을 담은 함수 전달
	// => cmp1 함수의 인라인 치환 안됨
	// => 2개 요소 비교가 필요할때 마다 cmp1 계속 호출
	// => 데이타 양이 많이 지만 성능이 좋지 않음.
	std::sort(v.begin(), v.end(), cmp1);



	// 방법 3. 비교 정책 함수로 함수 객체 사용
	// => 함수 객체의 () 연산자가 인라인 치환 가능 
	std::less<int> f;

	std::sort(v.begin(), v.end(), f); 
	std::sort(v.begin(), v.end(), std::less<int>() );	// 오름 차순
	std::sort(v.begin(), v.end(), std::greater<int>());	// 내림 차순
					// => 한번만 사용할때는 이렇게 임시객체로 전달하면 됩니다.
	

	// 방법 4. C++11 이후 부터는 "람다표현식" 권장

	std::sort(v.begin(), v.end(), [](int a, int b) { return a < b; });


}

