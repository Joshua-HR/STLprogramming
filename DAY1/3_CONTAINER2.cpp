#include <iostream>

template<typename T> struct Node
{
	T     data;
	Node* next;

	Node(const T& a, Node* n) : data(a), next(n) {}
};

// �ݺ���(iterator)
// => list �ȿ� �ִ� ��Ҹ� ����ų�� �ִ� ������ ��Ȱ�� ��ü
template<typename T>
class slist_iterator
{
	Node<T>* current;
public:
	slist_iterator(Node<T>* p = nullptr) : current(p) {}

	// find �� �����Ϸ��� ++, *, ==, != ������ �����ؾ� �մϴ�.
	slist_iterator& operator++()
	{
		? ;
		return *this;
	}
	T& operator*() { return ? ; }

	bool operator==(const slist_iterator& other) { return ? ; }
	bool operator!=(const slist_iterator& other) { return ? ; }
};

//slist_iterator<int> p(500����);
//++p; // p.operator++() ȣ��
//*p;  // p.operator*() ȣ��










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