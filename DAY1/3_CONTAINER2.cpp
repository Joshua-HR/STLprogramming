#include <iostream>

template<typename T> struct Node
{
	T     data;
	Node* next;

	Node(const T& a, Node* n) : data(a), next(n) {}
};

// 반복자(iterator)
// => list 안에 있는 요소를 가리킬수 있는 포인터 역활의 객체
template<typename T>
class slist_iterator
{
	Node<T>* current;
public:
	slist_iterator(Node<T>* p = nullptr) : current(p) {}

	// find 로 전달하려면 ++, *, ==, != 연산이 가능해야 합니다.
	slist_iterator& operator++()
	{
		? ;
		return *this;
	}
	T& operator*() { return ? ; }

	bool operator==(const slist_iterator& other) { return ? ; }
	bool operator!=(const slist_iterator& other) { return ? ; }
};

//slist_iterator<int> p(500번지);
//++p; // p.operator++() 호출
//*p;  // p.operator*() 호출










template<typename T> class slist
{
	Node<T>* head = nullptr;
public:
	void push_front(const T& a)
	{
		head = new Node<T>(a, head);
	}
};
int main()
{
	slist<int> s;

	s.push_front(10);
	s.push_front(20);
	s.push_front(30);
	s.push_front(40);
	s.push_front(50); 
}