#include <map>

struct Point
{
	int x, y;
};

void foo(int n) {}
void goo(Point pt) {}
void hoo(std::pair<int, int> p) {}

int main()
{
	int n1 = 10;
	int n2 = { 10 }; // C++11. 중괄호 초기화 문법


}