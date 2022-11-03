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
	bool operator<(const Point& pt) const {	return x < pt.x;}
	bool operator==(const Point& pt) const {return x == pt.x;}
};

int main()
{
	// ����� ���� Ÿ���� < �� == �� �������������Լ��� �����ϸ�
	// ������ ��� �񱳿����� ����Ҽ� �ֽ��ϴ�.
	Point p1(1, 2);
	Point p2(1, 2);

	p1 == p2;
	p1 < p2;

}




