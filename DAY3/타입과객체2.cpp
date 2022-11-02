// 타입과 객체2.cpp
#include <functional>

template<typename Pr> void sort(Pr cmp)
{
	cmp(1, 2); // 요소 비교
}

template<typename Pr> class priority_queue
{
	Pr f; // 전달 받은 타입의 객체 생성
public:
	void pop()
	{
		f(요소1, 요소2); // 비교객체 사용
	}
};

int main()
{
	std::less<int> f; // std::less<int> : 타입
					  // f : 객체
//	sort( std::less<int> ); // error. 객체가 아닌 타입 전달
	sort( f); // ok
	sort( std::less<int>() ); // std::less<int>() : 객체생성하는 표기법

//	priority_queue< std::less<int>() > pq; // error.
											// 템플릿 인자는 타입이 필요

	priority_queue< std::less<int> > pq; // ok
}
