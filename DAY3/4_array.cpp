#include <vector>
#include <algorithm>
#include "show.h"

int main()
{
	// 배열 vs vector 

	int x[10] = { 1,2,3,4,5,6,7,8,9,10 }; 
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 }; 

	// 같은 점 
	// 1. 연속된 메모리에 요소를 보관
	// 2. 배열 연산자를 사용해서 요소 접근
	x[0] = 10;
	v[0] = 10;

	// vector 의 장점
	// => 크기 변경이 가능하다.
	// => 다양한 멤버 함수를 활용할수 있다.
	v.resize(20);
	int n = v.size();

	// 핵심 : 메모리 위치가 다르다
	// 배열    : 모든 요소가 스택에 있다.(지역변수일때)
	// vector : 동적할당된 메모리에 요소 보관
}
