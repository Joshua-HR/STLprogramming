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

	// ������ ������ ������
	// 1. ��ü�� ������ �ֱ�.
//	Point pt(1, 2);
//	v.push_back(pt); 


	// 2. �ӽð�ü�� �����ؼ� ����
	// => �ӽð�ü�� ���� ���� �ƴ� ������ ������ �ı�!
	// => vector �� �ֱ⸸ �ϱ����� ��ü�� �ʿ��ϸ� 1�� ��� ���� ����
//	v.push_back( Point(1, 2) );


	// 3. C++11 ���ʹ� {}�� �ص� �˴ϴ�.
	// => �ǹ̴� 2���� �����ϴ�.
//	v.push_back({ 1, 2 });


	// 4. ��ü�� �������� ����
	//    ��ü�� ����� ���� ������ ���ڸ� �����Ѵ�.
	v.emplace_back(1, 2);
		// �� �Լ� ���������� new Point(1,2) �� ����

	std::cout << "------------------" << std::endl;	
}

// �����̳ʰ� primitive Ÿ���̳� ������ Ÿ���� �����ϸ�
// push_xxx() �迭 �Լ�/insert ����ϸ� �˴ϴ�.

std::vector<int>    v1;
std::vector<Point*> v2;

v1.push_back(1);
v2.push_back(new Point(1,2));


// �����̳ʰ� "����� ���� Ÿ���� ������ ����" �ϸ� emplace�� ȿ�����Դϴ�.
// push_front => emplace_front
// push_back  => emplace_back
// insert     => emplace
// 
std::vector<Point> v;
v.push_back(Point(1, 2)); // bad
v.emplace_back(1, 2);     // good


// v.emplace_back( Point(1,2)) �� ������ ??
// 1. �ӽð�ü Point(1,2) �����˴ϴ� - ������ ȣ��
// 2. emplace_back �ȿ��� new Point(1���������ӽð�ü)- ���� ������ ȣ��

// v.emplace_back( 1,2) 
// 1. emplace_back �ȿ��� new Point(1,2) 



