// 3_함수객체1
#include <iostream>

// 함수 객체(function object)
// => () 연산자를 재정의 해서 함수 처럼 사용가능한 객체

// 왜?? 함수를 만들면 되는데,,, 
// 함수객체를 만드나요 ?? => 오후 수업의 핵심

// 결론은 "함수 보다 함수객체가 다양한 관점에서 좋습니다."



struct Plus
{
	int operator()(int a, int b)
	{
		return a + b;
	}
};
int main()
{
	Plus p;		// p 는 "Plus 라는 구조체 타입" 의 "객체" 입니다.

	int n = p(1, 2); // p는 함수 가 아닌 객체(구조체형 변수)인데
					 // p를 마치 함수 처럼 사용합니다.
					 // => 함수 객체라고 합니다.	
					// 원리는 "p.operator()(1,2)" 를 찾게 됩니다.
		
	int n1 = p.operator()(1, 2); // 이렇게 직접 호출해도 됩니다.

	// C++은 연산자 재정의 기술이 아주 발달되어 있습니다.
	// 
	// a + b; // a.operator+(b)
	// a - b; // a.operator-(b)
	// a();   // a.operator()()
	// a(1,2);// a.operator()(1, 2) 를 찾게 됩니다.
}
