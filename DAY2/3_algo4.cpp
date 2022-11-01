#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include "show.h"

int main()
{
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };
	std::list<int>   s = { 1,2,3,4,5,6,7,8,9,10 };

	// v �� s �� ���� ������ ������
	// 1. ��� �Լ��� reverse() �� �ִ��� ã�ƶ�!
	// 2. �˰��򿡼� "std::reverse" �� ã�ƶ�

	std::reverse( v.begin(), v.end() );
//	std::reverse( s.begin(), s.end() ); // list �� ����������

	s.reverse(); // ��� �Լ��� �ֽ��ϴ�. ��� �Լ��� �켱�� �ϼ���


	// �˰���   reverse : ��ҳ��� swap
	// list ��� reverse : next, prev �����͸� swap
	//			=> �����ϴ� ����� ũ�Ⱑ ũ�ٸ� �̷��� �ϴ°��� ȿ����
	
	

	

	show(v); // 10, 9, 8, 7, 6, 5, 4, 3, 2, 1
	show(s); // 10, 9, 8, 7, 6, 5, 4, 3, 2, 1

	return 0;
}

