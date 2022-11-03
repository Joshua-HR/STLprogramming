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
	int n2 = { 10 }; // C++11. �߰�ȣ �ʱ�ȭ ����

	foo(10);
	foo( { 10 } ); // C++11 ���� ����
				 
	// �Լ��� ����ü�� ���ڷ� ������ C++11 ���ʹ� �Ʒ� ó�� ���ް���
	goo( { 1,2 } );

	hoo(std::make_pair(1, 2)); // �̷��� �ص� ������
	hoo({ 1,2 }); // �̷��Ե� ���� ���� �մϴ�.
	//=========================================

	std::map<int, int> m;

	m.insert(std::make_pair(1, 2));
	m.insert( {1,2}); // ok.. C++11 �߰�ȣ �ʱ�ȭ ���������� ����

}