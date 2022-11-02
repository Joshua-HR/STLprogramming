#include <vector>

/*
class queue1
{
	std::vector<int> q;
public:
	void pop()
	{
		q.pop_front();	// 항상 에러
						// vector 는 pop_front() 없습니다.
	}
};

int main()
{
	queue1 q1;

	// queue1 은 템플릿(틀)이 아닙니다. 
	// q1.pop() 을 사용하지 않아도 에러입니다.
}
*/

template<typename T>
class queue1
{
	std::vector<T> q;
public:
	void pop()
	{
		q.pop_front();
	}
};

int main()
{
	queue1<int> q1;

	q1.pop();
}