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

// adapter 패턴 : "인터페이스의 불일치를 해결"하는 패턴
// => 기존 클래스의 인터페이스(함수이름)을 변경해서 사용자가 요구하는
//    클래스를 만드는 것.

template<typename T, typename C = std::deque<T> > class stack
{
	C c;
public:
	inline void push(const T& value) { c.push_back(value); }
	inline void pop()                { c.pop_back(); }
	inline T& top()                  { return c.back(); }
};

#include <stack> // STL 의 stack. 
				 // => 위코드와 거의 동일하게 만들어져 있습니다.
				 // => 흔히 "stack adapter" 라고 합니다.

int main()
{
	std::stack<int, std::list<int>>   s0;

	stack<int, std::list<int>>   s1;
	stack<int, std::vector<int>> s2; // vector 를 스택처럼 사용하겠다는 의미

	stack<int> s;	// 디폴트 값인 "std::deque" 를 스택처럼 사용하겠다는 의미

	s.push(10);
	s.push(20);

	std::cout << s.top() << std::endl;

}