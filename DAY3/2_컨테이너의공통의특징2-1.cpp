// 2_�����̳��ǰ�����Ư¡2-1
#include <list>
#include "show.h"

int main()
{
	std::list<int> s = { 1,2,3,4,5 };

	// 1. ��ҿ� �ݺ��ڸ� �� ���� �ϼ���
	auto n = s.front(); // 1��° ��� ���, auto �� int
	auto p = s.begin(); // 1��° ��Ҹ� ����Ű�� �ݺ��� ���
						// auto �� iterator
						// ��ҿ� ���� �Ϸ��� "*p"

	// 2. "��Ҹ� ����" �ϸ鼭 "��Ҹ� ��ȯ" �ϴ� ��� �Լ��� �����ϴ�.
//	int n2 = s.pop_front(); // error
							// pop_front�� ��ȯ Ÿ���� void

	// 3. ��, erase�� ��ȯ ���� void �� �ƴմϴ�.
	std::list<int> s2 = { 1,2,3,4,5 };
	auto p2 = s2.begin();

	while (p2 != s2.end())
	{
		++p2;
	}
	
}