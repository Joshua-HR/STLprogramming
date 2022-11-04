#include <iostream>
#include <functional>
using namespace std::placeholders;

void f1(int a) { printf("f1 : %d\n", a); }
void f2(int a, int b) { printf("f2 : %d, %d\n", a, b); }
void f3(int a, int b, int c) { printf("f3 : %d, %d, %d\n", a, b, c); }
void f4(int a, int b, int c, int d) { printf("f4 : %d, %d, %d, %d\n", a, b, c, d); }

class Dialog
{
public:
	void Init(int a, int b)
	{
		printf("Dialog Init : %d, %d\n", a, b);
	}

	static void foo(int a, int b)
	{
		printf("foo\n");
	}
};

//---------------------------------
class Button
{
public:
	// callback 을 만들때 함수 포인터를 사용하면 제약이 많습니다.
	// 1. 인자를 갯수가 동일해야 하고
	// 2. 멤버 함수 등록도 안됩니다.
	//void(*handler)() = nullptr;

	std::function<void()> handler = nullptr;

	void Click()
	{
		// 버튼 클릭시 등록된 함수를 호출하려고 합니다.
		if (handler)
			handler();
	}
};
int main()
{
	Button btn;
//	btn.handler = std::bind(&f4, 0, 0, 0, 0);
	btn.handler = []() { std::cout << "lambda" << std::endl; };
	btn.Click();
}












