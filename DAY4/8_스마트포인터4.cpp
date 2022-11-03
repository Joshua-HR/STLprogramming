#include <iostream>

// �ٽ� 1. C++11�� ����Ʈ�����͸� ����Ϸ��� �ʿ��� ���
#include <memory>

class Car
{
public:
	void Go() { std::cout << "Go" << std::endl; }
};

int main()
{
	// �ٽ� 2. ()�θ� �ʱ�ȭ �����ϰ� = �� �ȵ˴ϴ�.
	// => �����ڰ� "explicit" ��� �ǹ�
	std::shared_ptr<int> p1(new int) ; // ok
//	std::shared_ptr<int> p2 = new int; // error


	// �ٽ� 3. ����Ʈ �������� ũ��
	std::cout << sizeof(p1)   << std::endl; // �Ϲ������� 
											// raw pointer ũ�� 2��
	std::cout << sizeof(int*) << std::endl; // 32bit : 4
											// 64bit : 8



	// �ٽ� 4. -> �� . ������
	std::shared_ptr<Car> sp1(new Car);
	std::shared_ptr<Car> sp2 = sp1;

	// -> ������ : ���ü(Car) ����� ����
	sp1->Go();


	// . ������ : shared_ptr ��ü�� ����� ����
	int n = sp1.use_count(); // 2

	Car* p = sp1.get();      // sp1�� ����Ű�� ��ü�� ���� �ּ�
	sp1.reset(); // sp1 = nullptr �� �ǹ�
	sp2 = nullptr; // ���� �̷��� �ص� �˴ϴ�.
					// �̼��� ��������� 0, ��ü �ı�
}



