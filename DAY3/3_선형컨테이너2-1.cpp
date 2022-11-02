#include <vector>
#include <iostream>
#include <algorithm>
#include "show.h"

// vector ��� �Լ� ����

int main()
{
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	auto p = std::find(v.begin(), v.end(), 5);

	// 1. ����
	v.insert(p, 30); // �߰� ����
					 // p �� ����Ű�� ��� �տ� 30 �ֱ�

//	v.push_front(10); // vector �� �ȵ�
	v.push_back(20);  // ���� �߰� �Ǹ鼭 ���۰� ����˴ϴ�.
					  // ������ ���� ���Ҵ� �ݺ��ڴ� ��ȿȭ �˴ϴ�.

//	v.insert(p, 30); // ����!!! �� �ڵ� ������ �ݺ��� ��ȿȭ �߻�.

	

	// ���� : vector �� push_front �� ������
	//			insert �� �տ� ������ �ֱ� �մϴ�.
	v.insert(v.begin(), 100); // ok.. ������ �����ϴ�.
							  // �ǵ��� ������� ������

	show(v); // 100, 1,2,3,4,30,5,6,7,8,9,10,20
	//=============================================
	// 2. ����
	int n1 = v.front();
	int n2 = v.back();

	int n3 = v[3];		// ��, list �� �ȵ�
	int n4 = v.at(3);	// ��, list �� �ȵ�

	// list �� ���� 3��° �����Ϸ��� ��� �ϳ��� ?
	// => �ݺ��� ����ϼ���
	auto it = v.begin();
	std::advance(it, 2);
	int n5 = *it;

	// 3. ��� ����
//	v.pop_front(); // vector �� �ȵ�
	v.pop_back();
//	v.erase(p); // �ݺ��� p�� ��ġ�� �ִ� ��� ����
//	v.erase(p1, p2); // p1 ~ p2 �� ������ �ִ� ��� ����

	v.clear();	// ��� ��� ����

	// 4. ��� ����
	std::vector<int> v2 = { 1,2,3 };

	v.assign(v2.begin(), v2.end()); // v �� ���ڷ� ���޵� 
									// ������ ������ ����

	show(v); // 1, 2, 3

	// 5. ���� ���

	auto sz1 = v.max_size(); // ���� ������ �ִ� ��� ����
	auto sz2 = v.size();     // ���� ����

	bool b = v.empty();

	auto ax = v.get_allocator(); // v�� ����ϴ� �޸� �Ҵ��

	int* p1 = ax.allocate(1);
	ax.deallocate(p1, 1);

	std::cout << typeid(ax).name() << std::endl; // ax Ÿ���̸����
}