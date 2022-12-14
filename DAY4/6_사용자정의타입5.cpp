#include "show.h"
#include <set>

// 핵심 : set 에 사용자 정의 타입 넣기

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
	// set에 Point 를 넣으려면
	// 1. Point 자체에 < 연산자가 제공되거나
	// 2. Point 2개를 비교할수 있는 함수 객체 필요

	std::set<Point, ComparePoint> s;

	s.insert(Point(5, 5));	// 이렇게 해도 되지만
	s.emplace(3, 2);		// 이 코드가 좀더 효율적입니다.
	s.emplace(2, 1);
	s.emplace(1, 5);

}










