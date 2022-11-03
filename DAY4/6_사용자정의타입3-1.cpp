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
	// !=, >, >=, <= 함수를 템플릿으로 제공하는 namespace 
	using namespace std::rel_ops; // relational operators

	// 사용자 정의 타입이 < 와 == 만 연산자재정의함수를 제공하면
	// 나머지 모든 비교연산을 사용할수 있습니다.
	Point p1(1, 2);
	Point p2(1, 2);

	p1 == p2; // p1.operator==(p2)
	p1 < p2;  // p1.operator<(p2)

	p1 != p2; //  !(p1==p2)
	p1 > p2;  //  (p2 < p1)
	p1 >= p2;
	p1 <= p2;

	// C++20 부터는 "우주선 연산자"라는 것이 새롭게 나옵니다.

	int ret = 10 <=> 3;  // 앞이 크면 0보다 큰값
						 // 같으면 0
						 // 작으면 음수

	// 모든 관계 연산자는 <=> 로 표현가능합니다.
	p1 == p2; // (p1 <=> p2) == 0
	p1 >  p2; // (p1 <=> p2) > 0
	p1 >= p2; // (p1 <=> p2) >= 0

	// 결론 "Point" 타입이 6개의 관계연산자를 지원하고 싶다면
	// C++20 부터 "operator<=>" 한개만 만들면 됩니다.

	// 정식 명칭 : three way comparison
	//     별명 : spaceship operator
}




