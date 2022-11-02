#include <vector>
#include <iostream>
#include <algorithm>
#include "show.h"

// vector 멤버 함수 정리

int main()
{
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	auto p = std::find(v.begin(), v.end(), 5);

	// 1. 삽입
	v.insert(p, 30); // 중간 삽입
					 // p 가 가리키는 요소 앞에 30 넣기

//	v.push_front(10); // vector 는 안됨
	v.push_back(20);  // 끝에 추가 되면서 버퍼가 변경됩니다.
					  // 이전에 꺼내 놓았던 반복자는 무효화 됩니다.

//	v.insert(p, 30); // 버그!!! 위 코드 때문에 반복자 무효화 발생.

	

	// 참고 : vector 는 push_front 는 없지만
	//			insert 로 앞에 넣을수 있긴 합니다.
	v.insert(v.begin(), 100); // ok.. 하지만 느립니다.
							  // 되도록 사용하지 마세요

	show(v); // 100, 1,2,3,4,30,5,6,7,8,9,10,20
	//=============================================



	// 2. 접근


	// 3. 요소 변경

}