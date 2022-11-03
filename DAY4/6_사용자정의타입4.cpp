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
};

int main()
{
	std::vector<Point*> v;

	v.push_back(new Point(1, 2));
	v.push_back(new Point(3, 1));
	v.push_back(new Point(4, 2));
	v.push_back(new Point(2, 2));

	// v를 sort 해 보세요.. 비교 정책은 "람다표현식" 사용
	// => 핵심 : v 가 "Point" 가 아닌 "Point*" 를 보관

//	std::sort(v.begin(), v.end());	// error 는 아니지만
									// 객체의 상태가 아닌 주소로 비교

	std::sort(v.begin(), v.end(), 
		[](const Point* p1, const Point* p2) { return p1->x < p2->x; });



	for (auto p : v) 
		p->dump();

	for (auto p : v) delete p;

}




