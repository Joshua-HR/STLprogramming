// 5_�Լ���ü10
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional> 
#include "show.h"

int main()
{
	std::vector<int> v = { 1,3,5,7,9,2,4,6,8,10 };

	// ������ ���� ǥ������ ������ ���ȴٸ�
	// 1. auto ������ ��Ƽ� ����ϰų�
	// 2. std::less ���� ����ϴ� ���� �����ϴ�.

	// �Ʒ� �ڵ��� ����� sort �Լ��� 3�� �����˴ϴ�.
	// => ��� ���� ǥ������ �ٸ� Ÿ�� �Դϴ�.
	std::sort(v.begin(), v.end(), [](int a, int b) { return a < b; });
									// class xxx{}; xxx();

	std::sort(v.begin(), v.end(), [](int a, int b) { return a < b; });
									// class yyy{}; yyy();

	std::sort(v.begin(), v.end(), [](int a, int b) { return a < b; });
									// class zzz{}; zzz();


	// �� �ڵ��� �ذ�å1. ����ǥ������ auto ������ ��Ƽ� sort �� ���
	auto cmp = [](int a, int b) { return a < b; };
				// class kkk{}; kkk();
	std::sort(v.begin(), v.end(), cmp);
	std::sort(v.begin(), v.end(), cmp);
	std::sort(v.begin(), v.end(), cmp);


	// �ذ�å 2. std::less �� std::greater ���� �̹� ������� �Լ���ü���
	std::greater<int> f;
	std::sort(v.begin(), v.end(), f);
	std::sort(v.begin(), v.end(), f);
	std::sort(v.begin(), v.end(), f);

	// �Ʒ� ó���ص� ���� ������ �ʽ��ϴ�.
	// => ��ü �����ɶ� ������ ȣ���� ��� �߻��ϸ� ������ �ʳ��� ??
	// => "�����ڰ� �ϴ����� �����ϴ�. ����ȭ �Ǿ ������ ȣ�� �ȵ˴ϴ�."
	// => �� �ڵ�� ������ �����մϴ�. ���� ���� �ڵ� �ƴմϴ�.
	std::sort(v.begin(), v.end(), std::greater<int>());
	std::sort(v.begin(), v.end(), std::greater<int>());
	std::sort(v.begin(), v.end(), std::greater<int>());
}
// �Լ��� �ٸ� �Լ��� ������
// foo(�Ϲ��Լ�) => ���� ġȯ �ɼ� �����ϴ�. "�ζ��� �Լ���"





