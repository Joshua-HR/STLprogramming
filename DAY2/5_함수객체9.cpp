// 3_함수객체7 - 136 page소스
#include <iostream>
#include <algorithm>

inline bool cmp1(int a, int b) { return a < b; }
inline bool cmp2(int a, int b) { return a > b; }
struct Less   { inline bool operator()(int a, int b) { return a < b; }};
struct Greater{	inline bool operator()(int a, int b) { return a > b; }};

int main()
{
	int x[10] = { 1,3,5,7,9,2,4,6,8,10 };

	// C++ 표준의 std::sort()는 3개 인자가 모두 템플릿 입니다.


	// 1. 비교 정책으로 일반함수 사용시
	
	// 장점 : 비교 정책을 여러번 교체해도 생성된 sort()함수는 한개입니다.
	//       => 코드 메모리 증가 안함

	// 단점 : 비교 정책 함수는 인라인 치환 될수 없습니다.
	//       함수 포인터에 담아서 다시 호출될수 밖에 없습니다.
	//       느립니다.

	std::sort(x, x + 10, cmp1); // sort(int*, int*, bool(*)(int, int)) 모양의 함수를 생성 
	std::sort(x, x + 10, cmp2); // sort(int*, int*, bool(*)(int, int)) 모양의 함수를 생성 


	// 2. 비교정책으로 함수객체 사용시

	// 장점 : 비교 정책 함수(operator()) 가 인라인 치환 될수 있다.
	//       빠르다.
	//  
	// 단점 : 비교 정책을 교체한 횟수 만큼의 sort() 함수 생성
	//       => 코드 메모리 사용량이 증가한다.

	Less    f1;
	Greater f2;
	std::sort(x, x + 10, f1); // sort(int*, int*, Less) 모양의 함수 생성
	std::sort(x, x + 10, f2); // sort(int*, int*, Greater) 모양의 함수 생성
}









