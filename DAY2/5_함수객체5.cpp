#include <iostream>
#include <vector>
#include <algorithm>

class IsDivide
{
	int value;
public:
	IsDivide(int n) : value(n) {}

	bool operator()(int n)
	{
		return n % value == 0;
	}
};
int main()
{
	int k = 3;
	std::vector<int> v = { 1,2,9,3,4,5,6,7,8 };

	IsDivide f(k);	// 1. f�� �����Լ�(��ü) �Դϴ�.
					// 2. �׷���, main �Լ��� ���������� k�� ���� ����(ĸ��)�ϴ�
					//    ����� �ֽ��ϴ�.

	bool b = f(10); // f �� ���ڰ� �Ѱ��� �Լ�(��ü) �Դϴ�.
					// 10�� k�� ����ΰ� ?

	auto ret1 = std::find_if(v.begin(), v.end(), f);
							// �ᱹ "�����Լ� + �������� k"�� ����
							// ��, �������� k�� ĸ���� �����Լ�!!

	// �Ʒ� ó�� �ӽð�ü�� ����� ���·� �����ص� �˴ϴ�.
	auto ret2 = std::find_if(v.begin(), v.end(),  IsDivide(k) );
}
