// 타입과객체7

template<typename Pr>
class pqueue
{
	Pr cmp;	// 이렇게만 하면 디폴트 생성자가 필요 합니다.
			// 그래서 아래 인자 있는 생성자가 필요 합니다.
public:
	pqueue() {}
	pqueue(Pr f) : cmp(f) {} // cmp 만들때 f로 초기화
							// 즉, 디폴트 생성자가 아닌 복사 생성자

	void pop() {}
};

int main()
{
	auto cmp = [](int a, int b) { return a < b; };

	pqueue< decltype(cmp) > pq(cmp);

	// 단C++20 부터는
	// 1. 람다 표현식 자체를 decltype 에 넣을수 있고
	// 2. 람다 표현식이 만드는 타입은 디폴트 생성자도 있습니다.
	// 그래서 그냥, 아래처럼하면 됩니다.

	pqueue< decltype([](int a, int b) { return a < b; }) > pq1;
}