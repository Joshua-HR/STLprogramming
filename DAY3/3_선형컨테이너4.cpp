#include <vector>
#include <iostream>
#include <algorithm>
#include "show.h"
// ���ſ� ����� ���� �Լ��� �ִٰ� ������ ���ô�.

void foo(int* arr, int sz) {}

int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };
	foo(x, 10);

	// �迭�� ũ�⺯���� �ȵǾ �����մϴ�.
	// vector �� ���մϴ�.

	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	// foo �� v�� ���� ������.
//	foo(&v , v.size()); // error. v�� �ּҰ� �ƴ�
						// v �� ����ϴ� ������ �ּҸ� ���� �� �մϴ�.
	
	foo(&v[0],    v.size()); // ok.. C++11 ������ ����ϴ� �ڵ�
	foo(v.data(), v.size()); // ok.. C++11 ����..
}


