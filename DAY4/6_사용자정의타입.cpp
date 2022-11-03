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


	// resize 등을 할때도 객체를 전달해야 합니다.
	v1.resize(20, Point(0, 0));
			// => 앞의 10개는 기존 버퍼의 내용으로 복사 생성
			// => 새로운 10개는 "Point(0,0)" 객체로 복사 생성.

	// 참고, Point 와 Point* 를 잘 구별하세요
//	std::vector<Point>  v3(10);	// 객체 자체를 보관
								// 디폴트 생성자가 없으므로 error
	
	std::vector<Point*> v4(10); // 객체를 가리키는 주소(포인터)보관
}



