#include <vector>
#include <iostream>
#include <algorithm>
#include "show.h"

// 선형컨테이너는 사용법이 유사하므로
// vector 를 기준으로 설명합니다.
// 대부분의 코드는 list 와 deque 에도 적용됩니다.

int main()
{
	// 1. 생성
	std::vector<int> v1;		// 요소가 0개
	std::vector<int> v2(10);	// 요소 10개가 0으로 초기화
	std::vector<int> v3(10, 3);	// 10개를 3으로 초기화
	std::vector<int> v4(v3);	// v3동일

	std::vector<int> v5 = { 1,2,3 }; // 3개를 1,2,3 으로 초기화
	std::vector<int> v6{ 1,2,3 };    // 위와 동일
	

	// 핵심. 아래 2줄 차이점 반드시 알아 두세요
	std::vector<int> v7(10, 3);
	std::vector<int> v8{ 10, 3 };



	// 2. 삽입, 


	// 3. 접근
	
	// 4. 요소 변경

}