#include <iostream>
#include <list>   
#include <vector>

// �ݺ��� ��ȿȭ
int main()
{
	std::vector<int> v = { 1,2,3,4,5 };
	
	auto p = v.begin();

	std::cout << *p << std::endl; // 1


	v.resize(10);	// vector �� ũ�⸦ 10���� ����
					// �� ���� v �� ����ϴ� �޸�(����)��
					// ���Ҵ� �˴ϴ�.
					// ������ ����ϴ� ��� �ݺ��ڴ� ��ȿȭ �˴ϴ�.
					// �� �̻� ����Ҽ� �����ϴ�
					// v �� vector �� �ƴ� list ��� ��ȿȭ ���� �ʽ��ϴ�.
					// => �����̳��� �޸� ������ ��Ȯ�� �˾ƾ� �մϴ�.

	std::cout << *p << std::endl; // runtime error
}
// cppreference.com �� ������ ������
// => ���� ��ܿ��� "std::vector" ��� �˻��� ������


