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
	inline slist_iterator& operator++()
	{
		current = current->next;
		return *this;
	}

	inline T& operator*() { return current->data ; }

	inline bool operator==(const slist_iterator& other) { return current == other.current; }
	inline bool operator!=(const slist_iterator& other) { return current != other.current; }
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
	// �̱۸���Ʈ �����ڴ� �ݵ�� �ڽ��� ���۰� ������ ���� ��Ҹ� ����Ű��
	// �ݺ��ڸ� ��ȯ�ϴ� �Լ��� �����ϱ�� ��� �մϴ�.
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

	// ���� p�� list �� 1��° ��Ҹ� ����Ű�� ������ ��Ȱ�� �ϴ� ��ü �Դϴ�.
	// ��¥ �����ʹ� �ƴ����� ������ ������ ����� ������ ó�� �����ϰ� �߽��ϴ�
	std::cout << *p << std::endl; // 50
	++p;
	std::cout << *p << std::endl; // 40
	++p;
	std::cout << *p << std::endl; // 30
}