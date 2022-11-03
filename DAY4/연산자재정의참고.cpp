#include <iostream>

// 연산자 재정의는 2가지 방법으로 가능합니다.
class Point
{
public:
	int x, y;

	Point(int a = 0, int b = 0) : x(a), y(b) {}
	~Point() { }

	
	// 방법 1 멤버 함수로 구현
	bool operator<(const Point& pt) const
	{
		std::cout << "member <" << std::endl;
		return x < pt.x; // return "this.x < pt.x" 입니다.
	}
	friend bool operator>(const Point& p1, const Point& p2);
};

// 방법 2. 멤버가 아닌 함수 로 구현
bool operator>(const Point& p1, const Point& p2)
{
	std::cout << "non-member >" << std::endl;
	return p1.x < p2.x;
}

int main()
{
	Point p1(1, 2);
	Point p2(2, 3);

	p1 < p2; // p1.operator<(p2)  즉, 멤버 함수 사용. 인자가 한개인 함수
	p1 > p2; // operator>(p1, p2) 
}