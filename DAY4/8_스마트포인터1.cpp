#include <iostream>

class Car
{
public:
	void Go() { std::cout << "Go" << std::endl; }
	~Car()    { std::cout << "~Car" << std::endl; }
};
// ���� : ���� Ÿ���� ��ü�� �ٸ� Ÿ���� ������ ��Ȱ�� �ϴ� ��
// ���� : 
// ���� : 

// �Ʒ� Ptr Ŭ������ �ٽ� �Դϴ�.
class Ptr
{
	Car* obj;
public:
	Ptr(Car* p = 0) : obj(p) {}

	Car* operator->() { return obj; }
	Car& operator*() { return *obj; }
};

int main()
{
	Ptr p = new Car; // Ptr p( new Car )

	// Ptr Ÿ���� "��ü p" �� ��ġ "Car*" �ΰ� ó�� ���˴ϴ�.

	p->Go(); // p.operator->() Go()		// �̷� �ǹ�����
			 // (p.operator->())->Go()  // �̷��� �ؼ� �˴ϴ�.

	(*p).Go(); // ( p.operator*()).Go();

}


