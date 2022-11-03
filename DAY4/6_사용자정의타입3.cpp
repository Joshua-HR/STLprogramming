
#include <vector>
#include <algorithm>
#include "show.h"
class Point
{
public:
	int x, y;

	Point(int a = 0, int b = 0) : x(a), y(b)
	{
		std::cout << "Point()" << std::endl;
	}
	~Point() { std::cout << "~Point()" << std::endl; }

	Point(const Point& p)
	{
		std::cout << "Point(const Point&)" << std::endl;
	}
	void dump() const 
	{
		std::cout << x << ", " << y << std::endl;
	}
	// < ������ ������
	bool operator<(const Point& pt) const
	{
		return x < pt.x;
	}
};
int main()
{
	std::vector<Point> v;

	v.emplace_back(1, 2); // v.push_back(Point(1,2)) �� ȿ��������!!
	v.emplace_back(2, 3);
	v.emplace_back(3, 2);
	v.emplace_back(0, 1);

	// ��������ڸ� ������ ��� Ÿ�Ե� �����̳ʿ� ������ �ֽ��ϴ�.
	// ��, �˰����� ����Ϸ��� ������ �����ؾ� �մϴ�.

	// std::sort �� ����Ϸ��� ũ�� �񱳰� �Ǿ�� �մϴ�.
	// std::sort(v.begin(), v.end()); // error

	// ��� 1. ũ�� �񱳸� �ϴ� ����ǥ���� ����
//	std::sort(v.begin(), v.end(),
//		[](const Point& p1, const Point& p2) { return p1.x < p2.x; });


	// ��� 2. Point Ÿ�� ��ü�� < �����ڸ� ������ �ϸ� �ȴ�.
	std::sort(v.begin(), v.end()); // <

}




