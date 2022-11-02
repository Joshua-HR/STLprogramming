// 선형컨테이너(sequence container)
// => 모든 요소가 입력된 순서대로 한줄로 놓여 있는것

// C++98 에서 3개
#include <vector>	// 연속된 메모리, 임의접근 반복자
					// 요소 순환 빠름, 중간 삽입/삭제 느림
					// 캐쉬 적중율이 좋다.!

#include <deque>   // 연속된 메모리와 유사, 임의접근 반복자

#include <list>		// 떨어진 메모리, 양방향 반복자(+, - 안됨)
					// 중간에 삽입/삭제 빠름	


// C++11 추가된 2개
#include <forward_list> // 전진형 반복자, 싱글링크드 리스트
#include <array>		// 임의접근 반복자

#include "show.h"



int main()
{
	// 핵심 1. 선형 컨테이너 는 사용법의 거의 동일 합니다.
	// => 사용법이 거의 동일하므로 컨테이너만 변경해서 테스트 해볼수 있습니다.
//	std::list<int>   c = { 1,2,3 };
	std::vector<int> c = { 1,2,3 };

	c.push_back(5);
	c.back();
	c.pop_back();


	// 핵심 2. 사용법이 다른 경우(멤버함수가 없는 경우)
	// => 해당 컨테이너에 그 기능을 사용하지 말라고 의도적으로 설계된것

	c.push_front(5); // list, deque 는 가능
					 // vector 는 에러.!
					 // vector 는 앞쪽으로 삽입/삭제 안됨
					 // 참고) 뒤쪽, 중간에는 넣을수 있습니다.

	// 핵심 3. [] 연산은 임의접근 반복자를 가지는 컨테이너만 됩니다.
	c[0] = 10; // vector 와 deque 은 가능
				// list 는 안됨

	std::list<int> s = { 1,2,3 };

	for (int i = 0; i < s.size(); i++)
	{
		s[i] = 0; // 이코드가 된다면 어떤 문제인지 예상해 보세요
	}
}
