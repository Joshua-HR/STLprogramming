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
	// !=, >, >=, <= �Լ��� ���ø����� �����ϴ� namespace 
	using namespace std::rel_ops; // relational operators

	// ����� ���� Ÿ���� < �� == �� �������������Լ��� �����ϸ�
	// ������ ��� �񱳿����� ����Ҽ� �ֽ��ϴ�.
	Point p1(1, 2);
	Point p2(1, 2);

	p1 == p2; // p1.operator==(p2)
	p1 < p2;  // p1.operator<(p2)

	p1 != p2; //  !(p1==p2)
	p1 > p2;  //  (p2 < p1)
	p1 >= p2;
	p1 <= p2;

	// C++20 ���ʹ� "���ּ� ������"��� ���� ���Ӱ� ���ɴϴ�.

	int ret = 10 <=> 3;  // ���� ũ�� 0���� ū��
						 // ������ 0
						 // ������ ����

	// ��� ���� �����ڴ� <=> �� ǥ�������մϴ�.
	p1 == p2; // (p1 <=> p2) == 0
	p1 >  p2; // (p1 <=> p2) > 0
	p1 >= p2; // (p1 <=> p2) >= 0

	// ��� "Point" Ÿ���� 6���� ���迬���ڸ� �����ϰ� �ʹٸ�
	// C++20 ���� "operator<=>" �Ѱ��� ����� �˴ϴ�.

	// ���� ��Ī : three way comparison
	//     ���� : spaceship operator
}




