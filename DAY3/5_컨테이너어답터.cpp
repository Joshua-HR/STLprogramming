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

// adapter ���� : "�������̽��� ����ġ�� �ذ�"�ϴ� ����
// => ���� Ŭ������ �������̽�(�Լ��̸�)�� �����ؼ� ����ڰ� �䱸�ϴ�
//    Ŭ������ ����� ��.

template<typename T, typename C = std::deque<T> > class stack
{
	C c;
public:
	inline void push(const T& value) { c.push_back(value); }
	inline void pop()                { c.pop_back(); }
	inline T& top()                  { return c.back(); }
};

#include <stack> // STL �� stack. 
				 // => ���ڵ�� ���� �����ϰ� ������� �ֽ��ϴ�.
				 // => ���� "stack adapter" ��� �մϴ�.

int main()
{
	std::stack<int, std::list<int>>   s0;

	stack<int, std::list<int>>   s1;
	stack<int, std::vector<int>> s2; // vector �� ����ó�� ����ϰڴٴ� �ǹ�

	stack<int> s;	// ����Ʈ ���� "std::deque" �� ����ó�� ����ϰڴٴ� �ǹ�

	s.push(10);
	s.push(20);

	std::cout << s.top() << std::endl;

}