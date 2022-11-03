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
	bool operator<(const Point& pt) const {	return x < pt.x;}
	bool operator==(const Point& pt) const {return x == pt.x;}
};

int main()
{
	// 사용자 정의 타입이 < 와 == 만 연산자재정의함수를 제공하면
	// 나머지 모든 비교연산을 사용할수 있습니다.
	Point p1(1, 2);
	Point p2(1, 2);

	p1 == p2;
	p1 < p2;

}




