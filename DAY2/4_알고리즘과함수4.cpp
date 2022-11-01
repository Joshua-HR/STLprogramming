// 4_알고리즘과함수3   "3_algo1-1.cpp" 복사
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include "show.h"

bool foo(int n) { return  n != 0 && n % 3 == 0 ; }


int main()
{
	std::vector<int> v = { 1,9,3,1,2,3,1,2,3,1 };


	// 아래 코드의 결과를 확인해 보세요
	// => v의 모든 요소에 대해서 "1" 을 "0" 으로 변경
	std::replace(v.begin(), v.end(), 1, 0);

	show(v); // 0,9,3,0,2,3,0,2,3,0



	// 위 코드 결과를 참고해서 아래 코드 만들어 보세요
	// v 안의 모든 요소중에서 "3의 배수를 -1로" 만들어 보세요
	
//	std::replace_if(v.begin(), v.end(), 조건자, 변경할값 ); 

//	std::replace_if(v.begin(), v.end(), foo, -1);

	std::replace_if(v.begin(), v.end(), 
				[](int n) { return  n != 0 && n % 3 == 0; }, 
				-1);

	
	show(v); // 0,-1,-1,0,2,-1,0,2,-1,0
}




// 1. 함수를 외부에 만들어서 해보시고..
// 2. "람다 표현식"으로도 해보세요.


