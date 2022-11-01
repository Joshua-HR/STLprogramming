// 5_함수객체10
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional> // std::less<>, std::greater<> 등의 함수객체제공
#include "show.h"

int main()
{
	std::vector<int> v = { 1,3,5,7,9,2,4,6,8,10 };



	std::sort(v.begin(), v.end(), [](int a, int b) { return a < b; } );
	
	// 람다 표현식의 원리
	// => 컴파일러에게 함수 객체 클래스를 만들어 달라는 표기법입니다.
	// => 함수 객체와 완전히 동일한 효과입니다.
	// 위 한줄을 보고 컴파일러는 아래 코드를 생성합니다.

	class CompilerGeneratedName
	{
	public:
		inline auto operator()(int a, int b) const
		{
			return a < b;
		}
	};

	std::sort(v.begin(), v.end(), CompilerGeneratedName() );

}

