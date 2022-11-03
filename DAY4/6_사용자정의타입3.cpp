
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
	// < 연산자 재정의
	bool operator<(const Point& pt) const
	{
		return x < pt.x;
	}
};
int main()
{
	std::vector<Point> v;

	v.emplace_back(1, 2); // v.push_back(Point(1,2)) 를 효율적으로!!
	v.emplace_back(2, 3);
	v.emplace_back(3, 2);
	v.emplace_back(0, 1);

	// 복사생성자만 있으면 어떠한 타입도 컨테이너에 넣을수 있습니다.
	// 단, 알고리즘을 사용하려면 조건을 만족해야 합니다.

	// std::sort 를 사용하려면 크기 비교가 되어야 합니다.
	// std::sort(v.begin(), v.end()); // error

	// 방법 1. 크기 비교를 하는 람다표현식 전달
//	std::sort(v.begin(), v.end(),
//		[](const Point& p1, const Point& p2) { return p1.x < p2.x; });


	// 방법 2. Point 타입 자체에 < 연산자를 재정의 하면 된다.
	std::sort(v.begin(), v.end()); // <

}




