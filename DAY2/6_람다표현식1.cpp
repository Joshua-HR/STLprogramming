// 5_�Լ���ü10
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional> // std::less<>, std::greater<> ���� �Լ���ü����
#include "show.h"

int main()
{
	std::vector<int> v = { 1,3,5,7,9,2,4,6,8,10 };



	std::sort(v.begin(), v.end(), [](int a, int b) { return a < b; } );
	
	// ���� ǥ������ ����
	// => �����Ϸ����� �Լ� ��ü Ŭ������ ����� �޶�� ǥ����Դϴ�.
	// => �Լ� ��ü�� ������ ������ ȿ���Դϴ�.
	// �� ������ ���� �����Ϸ��� �Ʒ� �ڵ带 �����մϴ�.

	class CompilerGeneratedName
	{
	public:
		inline auto operator()(int a, int b) const
		{
			return a < b;
		}
	};

	std::sort(v.begin(), v.end(), CompilerGeneratedName() );

}

