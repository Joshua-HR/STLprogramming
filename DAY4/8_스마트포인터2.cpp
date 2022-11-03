#include <iostream>

// 1. ���ø����� ������ �Ѵ�.

// 2. ���� �����ڸ� ���� ���� ���� ������ �ذ��ؾ� �Ѵ�.

// A. ���� ���� : ���� ������ ����
// B. ���� ��� : ����Ʈ ������ ���鶧 ���� ���
// C. ���� ���� : ����Ʈ ������ ���鶧 ���� ���
// D. ������ ���� : std::move ����!!


template<typename T>
class Ptr
{
	T* obj;
public:
	Ptr(T* p = nullptr) : obj(p) {}

	~Ptr() { delete obj; }

	T* operator->() { return obj; }
	T& operator*() { return *obj; }
};
int main()
{
	Ptr<int> p1 = new int;
	*p1 = 10;
	std::cout << *p1 << std::endl;

	Ptr<int> p2 = p1; // runtime error
}


