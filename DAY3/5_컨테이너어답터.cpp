#include <iostream>

// list 가 이미 있습니다
#include <list>
#include <vector>
#include <deque>

// 그런데, 스택이 필요합니다.
// 1. 새로 만들자.
// 2. list를 스택처럼 보이게 하자.


// list 의 멤버 함수 이름을 변경해서 스택처럼 보이게 하자.
// "push_back 함수" => "push 함수" 로 이름 변경한것
template<typename T> class stack
{
	std::list<T> c;
public:
	void push(const T& value) { c.push_back(value); }
	void pop()                { c.pop_back(); }
	T& top()                  { return c.back(); }
};



int main()
{
	stack<int> s;
	s.push(10);
	s.push(20);

	std::cout << s.top() << std::endl;

}