#include <vector>
#include "show.h"

// �ٽ� : �����̳ʿ� primitive type(int, double��) �ƴ�
//       ����� Ÿ���� �����ϴ� ���!

class Point
{
	int x, y;
public:
	Point(int a, int b) : x(a), y(b) {}
};
int main()
{
	// �ٽ� 1. ����Ʈ �����ڰ� ���� Ÿ���� �����ϴ� ���
//	std::vector<Point> v(10);	// error

	Point pt(0, 0);
	std::vector<Point> v(10, pt); // pt�� �����ؼ� 10�� ����
								  // "���� ������" ���

	std::vector<Point> v1(10, Point(0,0));
}



