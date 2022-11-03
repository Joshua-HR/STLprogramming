#include <iostream>
#include <unordered_set>
#include <set>
#include "show.h"

int main()
{
//	std::set<int> s;
	std::unordered_set<int> s;

	// �ٽ� 1. set �� unordered_set �� ������ ���� �����մϴ�
	//        ������ ���� ������ ������ �ٸ��ϴ�.

	s.insert(10);
	s.insert(35);
	s.insert(20);
	s.insert(25); // set : root ��� ���� ���ϸ鼭 left/right ��ġ
				  // unordered_set
				  // => 25�� hash �Լ��� ������ hash ���� �����Ŀ� ����
				  //    

	auto p = s.find(20); // set : root ��� ���� ���ϸ鼭 �˻�
						 // unordered_set : hash �Լ��� ����ؼ�
						//		hash ���� ������ �˻�

	std::cout << *p << std::endl;

	show(s); // begin ���� ++�� �̵�.
			// set : ������ ����
			// unordered_set : ���� �ȵ�
}

