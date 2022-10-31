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

	// slist �����ڴ� �ڽ��� �ݺ���(iterator) Ŭ���� �̸���
	// ��ӵ� �̸����� �ܺο� �����ϱ�� ����մϴ�.
	using iterator = slist_iterator<T>;
				// typedef  slist_iterator<T> iterator;

	iterator begin() { return iterator(head); }
	iterator end()   { return iterator(nullptr); }
};



int main()
{
	slist<int> s;

	s.push_front(10);
	s.push_front(20);
	s.push_front(30);
	s.push_front(40);
	s.push_front(50);


//	slist_iterator<int> p = s.begin();

	slist<int>::iterator p = s.begin();



	std::cout << *p << std::endl; 
	++p;
	std::cout << *p << std::endl; 
	++p;
	std::cout << *p << std::endl; 
}