#include "show.h"
#include <set>

// �ٽ� : set �� ����� ���� Ÿ�� �ֱ�

struct Point
{
	int x, y;
	Point(int a = 0, int b = 0) : x(a), y(b) {}
};

struct ComparePoint
{
	inline bool operator()(const Point& p1, const Point& p2) const
	{
		return p1.x < p2.x;
	}
};
int main()
{
	// set�� Point �� ��������
	// 1. Point ��ü�� < �����ڰ� �����ǰų�
	// 2. Point 2���� ���Ҽ� �ִ� �Լ� ��ü �ʿ�

	std::set<Point, ComparePoint> s;

	s.insert(Point(5, 5));	// �̷��� �ص� ������
	s.emplace(3, 2);		// �� �ڵ尡 ���� ȿ�����Դϴ�.
	s.emplace(2, 1);
	s.emplace(1, 5);

	//=======================================
	// �Ʒ� 2���� �� ������ ������ - �߿��մϴ�.!
	// equality, Equivalency

	auto ret1 = s.find(Point(3, 2));
	auto ret2 = std::find(s.begin(), s.end(), Point(3, 2));
}










