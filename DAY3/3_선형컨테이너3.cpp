#include <vector>
#include <iostream>
#include <algorithm>
#include "show.h"

// capacity 개념 - 중요 합니다.

int main()
{
	std::vector<int> v(10, 0);

	v.resize(7); // 어떻게 구현했을까요 ?
				 // 메모리 자체를 줄이지는 않고
				 // size 변수만 변경

	std::cout << v.size()	  << std::endl; // 7
	std::cout << v.capacity() << std::endl; // 10


	v.push_back(3); // 끝에 한개 요소(3) 추가
					// size < capaciy 상황이므로
					// 이 연산은 "not expensive" 입니다.
					
					// 이 경우(capacity > size)는 list 보다 vector 가
					// "push_back" 성능이 좋습니다.

	std::cout << v.size()     << std::endl; // 8
	std::cout << v.capacity() << std::endl; // 10

	//==================================================
	v.shrink_to_fit();	// 여분의 메모리는 필요 없다는 것
						// 이 경우 메모리의 재할당이 발생합니다.
						// 반복자 무효화 됩니다.
	std::cout << v.size()     << std::endl; // 8
	std::cout << v.capacity() << std::endl; // 8

	//=======================================
	v.push_back(3); // 끝에 한개 추가
					// size == capacity 상태 입니다.
					// "메모리 재할당 필요"
					// "expensive" !

	std::cout << v.size()     << std::endl; // 9
	std::cout << v.capacity() << std::endl; // VC++ : 1.5 배증가 
											// => 8 * 1.5 = 12
											// g++ : 2배증가
											// => 8 * 2 = 16
				
}




