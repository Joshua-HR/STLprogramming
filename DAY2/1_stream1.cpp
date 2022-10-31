#include <iostream>
#include <iterator>
#include <list>

int main()
{
	int n = 10;

	// 화면 출력하는 방법
	// 1. std::cout 또는 printf 사용
	std::cout << n << std::endl;


	// 2. ostream_iterator 를 사용하는 방법
	// => 출력을 할때 사용하는 반복자

	std::ostream_iterator<int> p(std::cout, " ");
	
	*p = 10; // std::cout << 10 << " "; 가 같은 코드
	*p = 20; 

	++p; // ostream_iterator 는 ++ 이 하는 일은 없습니다.
		 // 하지만 모든 반복자는 ++ 연산을 지원해야 합니다.


	std::list<int> s = { 1,2,3 };

	// 출력 반복자 덕분에 컨테이너의 모든 요소를 출력할때
	// std::copy 같은 것을 사용해서 한줄로 할수 있습니다.
	std::copy(s.begin(), s.end(), p);
					// => std::copy 가 내부적으로 마지막 인자인
					//    p 를 ++ 로 이동하는 코드가 있습니다.
					//    그래서 copy 를 사용하려면 모든 반복자는
					//    하는일이 없는 경우에도 ++ 을 제공해야 합니다.
}

