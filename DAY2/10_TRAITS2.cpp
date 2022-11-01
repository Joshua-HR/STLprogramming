#include <iostream>
#include <list>


template<typename T>
typename T::value_type sum(T first, T last)
{
	// ���� "T = int*" �Դϴ�. 
	// �׷���, int* �ȿ��� value_type �� �����ϴ�!!
	typename T::value_type s = 0; // error

	while (first != last)
	{
		s = s + *first;
		++first;
	}
	return s;
}

int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	// �ݺ��� : "�ݺ��� ó�� �����ϴ� ��� ���� �ݺ���" �̴�.
	//         ++�� �̵� �����ϰ� *�� ��� ���� �����Ѱ�
	//         raw pointer �� �ݺ��� �̴�.
	int n2 = sum(x, x + 10);

	std::cout << n2 << std::endl;
}