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
	int n1 = v.front();
	int n2 = v.back();

	int n3 = v[3];		// 단, list 는 안됨
	int n4 = v.at(3);	// 단, list 는 안됨

	// list 인 경우는 3번째 접근하려면 어떻게 하나요 ?
	// => 반복자 사용하세요
	auto it = v.begin();
	std::advance(it, 2);
	int n5 = *it;

	// 3. 요소 제거
//	v.pop_front(); // vector 는 안됨
	v.pop_back();
//	v.erase(p); // 반복자 p이 위치에 있는 요소 제거
//	v.erase(p1, p2); // p1 ~ p2 의 구간에 있는 요소 제거

	v.clear();	// 모든 요소 제거

	// 4. 요소 변경
	std::vector<int> v2 = { 1,2,3 };

	v.assign(v2.begin(), v2.end()); // v 를 인자로 전달된 
									// 구간의 값으로 변경

	show(v); // 1, 2, 3

	// 5. 정보 얻기

	auto sz1 = v.max_size(); // 보관 가능한 최대 요소 갯수
	auto sz2 = v.size();     // 현재 갯수

	bool b = v.empty();

	auto ax = v.get_allocator(); // v가 사용하는 메모리 할당기

	int* p1 = ax.allocate(1);
	ax.deallocate(p1, 1);

	std::cout << typeid(ax).name() << std::endl; // ax 타입이름출력
}