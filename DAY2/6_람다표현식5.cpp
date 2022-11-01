#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> v = { 1,9,3,4 };

	int k = 3;

	auto ret2 = std::find_if(v.begin(), v.end(),
							[k](int n) { return n % k == 0; });

	// 위처럼 캡쳐한 람다의 원리는 뭔가요 ??
	// 위 코드를 보고 컴파일러는 아래 클래스를 생성합니다.

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
// 결국 위 클래스는 "함수객체5.cpp" 에 있는 "IsDivide" 의 원리와 완벽히 동일합니다.
// 비교해 보세요.