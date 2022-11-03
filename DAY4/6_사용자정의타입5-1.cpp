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
	// �Ʒ� 2���� �� ������ ������ - �߿��մϴ�.!
	// equality, Equivalency

//	auto ret1 = std::find(s.begin(), s.end(), Point(3, 2));
							// error. 
							// ������ ���Ҷ�  "==" �����ڸ� ����ϴµ�
							// Point �ȿ��� "==" �����ڰ� �����ǵǾ� �����ʴ�
							// "equality" ����

	auto ret2 = s.find(Point(3, 1));	// Equivalency
										// �����ϴ�!

	if (ret2 != s.end())
	{
		std::cout << ret2->x << ", " << ret2->y << std::endl;
	}
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
			ã�Ҵ�!!
	}
};
*/







