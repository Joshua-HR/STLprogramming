#include <iostream>
#include <list>
#include <iterator>

// 반복자
// => 요소를 가리키다가 ++ 로 이동 가능한 모든 것

// 1. 컨테이너에서 꺼낼수도 있고 ( s.begin() )
// 
// 2. 독립적으로 만드는 반복자도 있습니다.
//    => 삽입 반복자
//    => 스트림 반복자
//    => 파일 시스템 반복자 등



int main(int argc, char** argv)
{
	std::list<int> s = { 1, 2, 3, 4, 5};

	// list 끝에 요소를 추가하고 싶다.
	
	// 방법 1. push_back 멤버 함수 사용
	s.push_back(10);


	// 방법 2. 삽입 반복자 사용
	std::back_insert_iterator< std::list<int> > p(s);

	*p = 20; // p 가 가리키는 컨테이너 끝에 추가
			 // 즉, "s.push_back(20)" 과 동일

	// 방법 3. 삽입반복자를 사용하는데. 직접 객체를 만들지 말고
	//        삽입반복자를 만들어주는 함수 사용

	auto p2 = std::back_inserter(s);
				// => 결국 back_insert_iterator<> 객체를 생성해서반환

	*p2 = 30;

	for (auto e : s)
		std::cout << e << ", "; // 1,2,3,4,5,10,20,30
}
