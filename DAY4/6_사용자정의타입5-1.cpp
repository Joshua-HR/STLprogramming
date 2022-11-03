#include "show.h"
#include <set>

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
	std::set<Point, ComparePoint> s;

	s.insert(Point(5, 5));	
	s.emplace(3, 2);		
	s.emplace(2, 1);
	s.emplace(1, 5);

	//=======================================
	// 아래 2줄을 잘 생각해 보세요 - 중요합니다.!
	// equality, Equivalency

//	auto ret1 = std::find(s.begin(), s.end(), Point(3, 2));
							// error. 
							// 같은지 비교할때  "==" 연산자를 사용하는데
							// Point 안에는 "==" 연산자가 재정의되어 있지않다

	auto ret2 = s.find(Point(3, 2));	
}
/*
template<typename T,
		 typename Pr = std::less<T>,
	     typename Alloc = std::allocator<T> >
class set
{
	Pr f;
public:
	iterator find(const T& elem)
	{
		if (f(root, elem))
			move right;

		else if (f(elem, root))
			move left;

		else 
			찾았다!!
	}
};
*/







