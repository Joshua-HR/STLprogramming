#include <vector>
#include "show.h"

class Point
{
	int x, y;
public:
	Point(int a = 0, int b = 0) : x(a), y(b) 
	{
		std::cout << "Point()" << std::endl;
	}
	~Point() { std::cout << "~Point()" << std::endl; }
	
	Point(const Point& p)
	{
		std::cout << "Point(const Point&)" << std::endl;
	}
};
int main()
{
	std::vector<Point> v;

	// 실행결과 예측해 보세요
	// 1. 객체를 생성후 넣기.
//	Point pt(1, 2);
//	v.push_back(pt); 


	// 2. 임시객체를 생성해서 전달
	// => 임시객체는 블럭의 끝이 아닌 문장의 끝에서 파괴!
	// => vector 에 넣기만 하기위해 객체가 필요하면 1번 방법 보다 좋다
//	v.push_back( Point(1, 2) );


	// 3. C++11 부터는 {}로 해도 됩니다.
	// => 의미는 2번과 같습니다.
//	v.push_back({ 1, 2 });


	// 4. 객체를 전달하지 말고
	//    객체를 만들기 위한 생성자 인자를 전달한다.
	v.emplace_back(1, 2);
		// 위 함수 내부적으로 new Point(1,2) 로 생성

	std::cout << "------------------" << std::endl;	
}

// 컨테이너가 primitive 타입이나 포인터 타입을 보관하면
// push_xxx() 계열 함수/insert 사용하면 됩니다.

std::vector<int>    v1;
std::vector<Point*> v2;

v1.push_back(1);
v2.push_back(new Point(1,2));


// 컨테이너가 "사용자 정의 타입을 값으로 보관" 하면 emplace가 효율적입니다.
// push_front => emplace_front
// push_back  => emplace_back
// insert     => emplace
// 
std::vector<Point> v;
v.push_back(Point(1, 2)); // bad
v.emplace_back(1, 2);     // good


// v.emplace_back( Point(1,2)) 는 뭔가요 ??
// 1. 임시객체 Point(1,2) 생성됩니다 - 생성자 호출
// 2. emplace_back 안에서 new Point(1에서만든임시객체)- 복사 생성자 호출

// v.emplace_back( 1,2) 
// 1. emplace_back 안에서 new Point(1,2) 



