#include <vector>
#include "show.h"

// 핵심 : 컨테이너에 primitive type(int, double등) 아닌
//       사용자 타입을 보관하는 경우!

class Point
{
	int x, y;
public:
	Point(int a, int b) : x(a), y(b) {}
};
int main()
{
	// 핵심 1. 디폴트 생성자가 없는 타입을 보관하는 경우
//	std::vector<Point> v(10);	// error

	Point pt(0, 0);
	std::vector<Point> v(10, pt); // pt를 복사해서 10개 생성
								  // "복사 생성자" 사용

	std::vector<Point> v1(10, Point(0,0));
}



