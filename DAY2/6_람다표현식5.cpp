#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> v = { 1,9,3,4 };

	int k = 3;

	auto ret2 = std::find_if(v.begin(), v.end(),
							[k](int n) { return n % k == 0; });

	// ��ó�� ĸ���� ������ ������ ������ ??
	// �� �ڵ带 ���� �����Ϸ��� �Ʒ� Ŭ������ �����մϴ�.

	class CompilerGeneratedName
	{
		int k;
	public:
		CompilerGeneratedName(int n) : k(n) {}

		inline auto operator()(int n) const
		{
			return n % k == 0;
		}
	};
	auto ret2 = std::find_if(v.begin(), v.end(), CompilerGeneratedName(k) );
}
// �ᱹ �� Ŭ������ "�Լ���ü5.cpp" �� �ִ� "IsDivide" �� ������ �Ϻ��� �����մϴ�.
// ���� ������.