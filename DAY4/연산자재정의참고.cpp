#include <iostream>

// ������ �����Ǵ� 2���� ������� �����մϴ�.
class Point
{
public:
	int x, y;

	Point(int a = 0, int b = 0) : x(a), y(b) {}
	~Point() { }

	
	// ��� 1 ��� �Լ��� ����
	bool operator<(const Point& pt) const
	{
		std::cout << "member <" << std::endl;
		return x < pt.x; // return "this.x < pt.x" �Դϴ�.
	}
	friend bool operator>(const Point& p1, const Point& p2);
};

// ��� 2. ����� �ƴ� �Լ� �� ����
bool operator>(const Point& p1, const Point& p2)
{
	std::cout << "non-member >" << std::endl;
	return p1.x < p2.x;
}

int main()
{
	Point p1(1, 2);
	Point p2(2, 3);

	p1 < p2; // p1.operator<(p2)  ��, ��� �Լ� ���. ���ڰ� �Ѱ��� �Լ�
	p1 > p2; // operator>(p1, p2) 
}