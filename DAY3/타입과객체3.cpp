// Ÿ�԰���ü3
#include <queue>
#include <functional>
#include <vector>
#include <algorithm>

// �ٽ� : �Ʒ� 2�� ���� �ϼ���
// std::less<int>	: Ÿ�� �Դϴ�.
// std::less<int>()	: ��ü �Դϴ�.

int main()
{
	std::vector<int> v = { 1,2,3,4,5 };

	std::sort(v.begin(), v.end(), ? );

	std::priority_queue<int, std::vector<int>, ? > pq;
}
