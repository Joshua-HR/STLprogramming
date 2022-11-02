// 5_컨테이너어답터4-1

// 아래 코드에서 "Pr"의 조건
// => "operator()" 를 재정의한 함수 객체이어야 한다.
// => 인자는 2개를 받아서 bool 을 반환해야 한다.

// 아래 코드는 STL 과는 약간 다릅니다. - 다음 소스 참고
template<typename T, typename Pr = std::less<T> >
class priority_queue
{
	Pr f; // 우선 순위를 비교하기 위한 객체

public:
	T& top()
	{
		// 방법 2. 
		if ( f(요소1, 요소2) == true) {}
	}
};

int main()
{
	priority_queue<int> pq;
	priority_queue<int, std::greater<int> > pq;
}