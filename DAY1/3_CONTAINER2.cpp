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
	inline slist_iterator& operator++()
	{
		current = current->next;
		return *this;
	}

	inline T& operator*() { return current->data ; }

	inline bool operator==(const slist_iterator& other) { return current == other.current; }
	inline bool operator!=(const slist_iterator& other) { return current != other.current; }
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
	// 싱글리스트 설계자는 반드시 자신의 시작과 마지막 다음 요소를 가리키는
	// 반복자를 반환하는 함수를 제공하기로 약속 합니다.
	slist_iterator<T> begin() { return slist_iterator<T>(head); }
	slist_iterator<T> end()   { return slist_iterator<T>(nullptr); }
};
int main()
{
	slist<int> s;

	s.push_front(10);
	s.push_front(20);
	s.push_front(30);
	s.push_front(40);
	s.push_front(50); 

	slist_iterator<int> p = s.begin();

	// 이제 p는 list 의 1번째 요소를 가리키는 포인터 역활을 하는 객체 입니다.
	// 진짜 포인터는 아니지만 연산자 재정의 기술로 포인터 처럼 동작하게 했습니다
	std::cout << *p << std::endl; // 50
	++p;
	std::cout << *p << std::endl; // 40
	++p;
	std::cout << *p << std::endl; // 30
}