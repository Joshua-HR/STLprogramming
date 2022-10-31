#include <iostream>
#include <list>   
#include <vector>

// 반복자 무효화
int main()
{
	std::vector<int> v = { 1,2,3,4,5 };
	
	auto p = v.begin();

	std::cout << *p << std::endl; // 1


	v.resize(10);	// vector 의 크기를 10으로 변경
					// 이 순간 v 가 사용하는 메모리(버퍼)가
					// 재할당 됩니다.
					// 이전에 사용하던 모든 반복자는 무효화 됩니다.
					// 더 이상 사용할수 없습니다
					// v 가 vector 가 아닌 list 라면 무효화 되지 않습니다.
					// => 컨테이너의 메모리 구조를 정확히 알아야 합니다.

	std::cout << *p << std::endl; // runtime error
}
// cppreference.com 에 접속해 보세요
// => 우측 상단에서 "std::vector" 라고 검색해 보세요


