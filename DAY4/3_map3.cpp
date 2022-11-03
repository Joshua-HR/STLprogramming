#include <map>

struct Point
{
	int x, y;
};

void foo(int n) {}		// int n = 10, int n = {10}

void goo(Point pt) {}	// Point pt = {1,2}

void hoo(std::pair<int, int> p) {}

int main()
{
	int n1 = 10;
	int n2 = { 10 }; // C++11. 중괄호 초기화 문법

	foo(10);
	foo( { 10 } ); // C++11 부터 가능
				 
	// 함수가 구조체를 인자로 받으면 C++11 부터는 아래 처럼 전달가능
	goo( { 1,2 } );

	hoo(std::make_pair(1, 2)); // 이렇게 해도 되지만
	hoo({ 1,2 }); // 이렇게도 위와 동일 합니다.
	//=========================================

	std::map<int, int> m;

	m.insert(std::make_pair(1, 2));
	m.insert( {1,2}); // ok.. C++11 중괄호 초기화 문법때문에 가능

}