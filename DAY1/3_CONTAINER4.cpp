#include <iostream>

template<typename T> struct Node
{
	T     data;
	Node* next;

	Node(const T& a, Node* n) : data(a), next(n) {}
};

template<typename T>
class slist_iterator
{
	Node<T>* current;
public:
	slist_iterator(Node<T>* p = nullptr) : current(p) {}


	inline slist_iterator& operator++()
	{
		current = current->next;
		return *this;
	}

	inline T& operator*() { return current->data; }

	inline bool operator==(const slist_iterator& other) { return current == other.current; }
	inline bool operator!=(const slist_iterator& other) { return current != other.current; }
};








template<typename T> class slist
{
	Node<T>* head = nullptr;
public:
	void push_front(const T& a)
	{
		head = new Node<T>(a, head);
	}

	using iterator = slist_iterator<T>;

	iterator begin() { return iterator(head); }
	iterator end() { return iterator(nullptr); }
};

// ALGORITHM6.cpp 에서 find  복사해오세요
// find 는 원래 모든 타입의 "배열"만 고려해서 만들었습니다.
// 반복자 덕분에 find 는 배열뿐 아니라 list 에서도 검색이 가능합니다.
template<typename T1, typename T2>
T1 find(T1 first, T1 last, const T2& c)
{
	while (first != last && *first != c)
		++first;

	return first;
}


int main()
{
	slist<int> s;

	s.push_front(10);
	s.push_front(20);
	s.push_front(30);
	s.push_front(40);
	s.push_front(50);

	// 반복자 덕분에 find 는 배열뿐 아니라 list 에서도 검색이 가능합니다.
	slist<int>::iterator p = find(s.begin(), s.end(), 30);

	std::cout << *p << std::endl;



}