// insert2.cpp
#include <iostream>
#include <algorithm>
#include <list>

// 함수 버전

int main(int argc, char** argv)
{
	std::list<int> s1 = { 10,20,30,40,50 };
	std::list<int> s2 = { 1, 2, 3, 4, 5 };

	
	// 아래 코드는 s1 => s2 로 덮어쓰는 코드 입니다.
	// std::copy( s1.begin(), s1.end(), s2.begin()); 

	// 핵심 : s1의 모든 내용을 s2 에 추가 하려면
	// 방법 1. 반복자 와 push_back 사용
	/*
	auto p1 = s1.begin();

	while (p1 != s1.end())
	{
		s2.push_back(*p1);
		++p1;
	}
	*/

	// 방법 2. 삽입 반복자 사용. 반복자 객체를 직접 생성
//	std::back_insert_iterator< std::list<int> > p2(s2);

//	std::copy(s1.begin(), s1.end(), p2); 


	// 방법 3. 삽입 반복자를 직접 만들지 말고, 
	//        삽입 반복자를 만드는 함수 사용
	std::copy(s1.begin(), s1.end(), std::back_inserter(s2));


	for (auto& n : s2)
		std::cout << n << std::endl; 

	// 아래 2줄 차이점 반드시 기억하세요
	std::copy(s1.begin(), s1.end(), s2.begin());  // s1 => s2 덮어쓰기
	std::copy(s1.begin(), s1.end(), std::back_inserter(s2));
												// s1 => s2 끝에 추가

}
