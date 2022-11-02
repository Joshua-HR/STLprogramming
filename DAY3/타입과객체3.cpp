// 타입과객체3
#include <queue>
#include <functional>
#include <vector>
#include <algorithm>

// 핵심 : 아래 2개 구별 하세요
// std::less<int>	: 타입 입니다.
// std::less<int>()	: 객체 입니다.

int main()
{
	std::vector<int> v = { 1,2,3,4,5 };

	std::sort(v.begin(), v.end(), ? );

	std::priority_queue<int, std::vector<int>, ? > pq;
}
