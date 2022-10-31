#include <forward_list> // 싱글 링크드 리스트 입니다. C++11 추가
#include <list>			// 더블 링크드 리스트 입니다. C++98 

int main()
{
	std::forward_list<int> s1 = { 1,2,3 };

	std::list<int> s2 = { 1,2,3 };

	auto p1 = s1.begin();
	auto p2 = s2.begin();
	
	// 아래 코드에서 에러를 찾아 보세요.
	++p1;	// ok
	--p1;	// error
	++p2;	// ok
	--p2;	// ok

	// 싱글리스트의 반복자는 -- 할수 없습니다.

	// 반복자는 기능에 따라 5가지로 분류 합니다.(iterator category)
	// 53 page
}