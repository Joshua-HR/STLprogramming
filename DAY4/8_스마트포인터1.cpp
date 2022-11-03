#include <iostream>

class Car
{
public:
	void Go() { std::cout << "Go" << std::endl; }
	~Car()    { std::cout << "~Car" << std::endl; }
};
// ���� : ���� Ÿ���� ��ü�� �ٸ� Ÿ���� ������ ��Ȱ�� �ϴ� ��
// 
// ���� : -> �� * �����ڸ� ������ �ؼ� ������ó�� �����ϰ� �����
// 
// ���� : raw pointer �� �ƴ� ��ü��� ��
//       ����/����/����/�ı��� ��� ������ ��ӵ� �Լ��� ȣ��ȴ�.
//       �� �������� �߰��� �۾����డ��
//       ��ǥ�� Ȱ���� �Ҹ��ڿ��� delete ��� 

// �Ʒ� Ptr Ŭ������ �ٽ� �Դϴ�.
class Ptr
{
	Car* obj;
public:
	Ptr(Car* p = 0) : obj(p) {}
	
	~Ptr() { delete obj; }

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


