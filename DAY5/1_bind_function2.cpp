#include <iostream>
#include <functional>
using namespace std::placeholders;

void f1(int a)               { printf("f1 : %d\n", a); }
void f2(int a, int b)        { printf("f2 : %d, %d\n", a, b);}
void f3(int a, int b, int c) { printf("f3 : %d, %d, %d\n", a, b, c); }
void f4(int a, int b, int c, int d) { printf("f4 : %d, %d, %d, %d\n", a, b, c, d);}

class Dialog
{
public:
	void Init(int a, int b)
	{
		printf("Dialog Init : %d, %d\n", a, b);
	}
};

int main()
{
	// C 언어의 함수 포인터는 "유연성이 부족" 해서 불편합니다.
//  void(*f)(int) = &f1; // ok
//	f = &f2;			 // error. 인자의 갯수가 다릅니다.

	// C++11 에서 추가된 "std::function" 을 사용하면
	// 함수 포인터 보다 편리합니다.
	// void(int)    : 함수 타입
	// void(*)(int) : 함수 포인터 타입

	std::function<void(int)> f;
    
	f = &f1;
	f(10);  // ok.. f1(10).. 결국 f 는 함수 포인터와 유사합니다.


	// 핵심 : function 은 "bind 의 결과(새로운 함수)"를 담을수 있다는 장점이 있습니다.
//	f = &f2; // error. f2는 인자가 2개.. 

	f = std::bind(&f2, _1, 5);
	f(7);   // f2(7, 5)


	f = std::bind(&f4, ? );
	f(3); // f4(6, 3, 4, 2) 처럼 동작하게 해보세요
}












