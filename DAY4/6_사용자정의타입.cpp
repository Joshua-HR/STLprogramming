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


	// resize ���� �Ҷ��� ��ü�� �����ؾ� �մϴ�.
	v1.resize(20, Point(0, 0));
			// => ���� 10���� ���� ������ �������� ���� ����
			// => ���ο� 10���� "Point(0,0)" ��ü�� ���� ����.

	// ����, Point �� Point* �� �� �����ϼ���
//	std::vector<Point>  v3(10);	// ��ü ��ü�� ����
								// ����Ʈ �����ڰ� �����Ƿ� error
	
	std::vector<Point*> v4(10); // ��ü�� ����Ű�� �ּ�(������)����
}



