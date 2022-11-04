#include <iostream>
#include <functional>

// C++ ǥ���� reference_wrapper ���� ������ ���� �Դϴ�.
template<typename T>
class reference_wrapper
{
	T* pobj;
public:
	reference_wrapper(T& obj) : pobj(&obj) {}

	// "raw reference" ���� ��ȯ�� ���� ��ȯ ������
	operator T& () { return *pobj; }
};

int main()
{
	int n1 = 10;
	int n2 = 20;

	reference_wrapper<int> r1 = n1;
	reference_wrapper<int> r2 = n2;

	// "raw reference" ���� ȣȯ�� �ʿ� �մϴ�.
	int& r3 = r1; // r1.operator int&() ��� ��ȯ ������ �ʿ�

	r1 = r2;	

	std::cout << n1 << std::endl;
	std::cout << n2 << std::endl;
	std::cout << r1 << std::endl;
	std::cout << r2 << std::endl;
}

