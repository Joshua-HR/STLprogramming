#include <iostream>

// list �� �̹� �ֽ��ϴ�
#include <list>
#include <vector>
#include <deque>

// �׷���, ������ �ʿ��մϴ�.
// 1. ���� ������.
// 2. list�� ����ó�� ���̰� ����.


// list �� ��� �Լ� �̸��� �����ؼ� ����ó�� ���̰� ����.
// "push_back �Լ�" => "push �Լ�" �� �̸� �����Ѱ�
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