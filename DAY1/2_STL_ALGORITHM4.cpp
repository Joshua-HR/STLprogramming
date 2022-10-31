#include <iostream>

// 4. ���� �����ϰ� - �ణ ��ƽ��ϴ�.

// ���ø��� �Ʒ� ó�� ����� 2���� ������ �ֽ��ϴ�
// 
// 1. ������ Ÿ�԰� �˻��ϴ� ����� Ÿ���� �����˴ϴ�.
//    => double �迭������ double ���� �˻� �����մϴ�.
//       double �迭������ int �� �˻� �ȵ˴ϴ�.

// 2. T* ��� ������ "raw pointer" �� �����մϴ�
//    ����Ʈ ������ ���� "�����Ϳ� ������ ��ü"�� ����Ҽ� �����ϴ�.

//template<typename T> T* find(T* first, T* last, T c)


template<typename T1, typename T2>
T1 find(T1 first, T1 last, T2 c)
{
	while (first != last && *first != c)
		++first;

	return first == last ? nullptr : first;
}




int main()
{
	double x[10] = { 1,2,3,4,5,6,7,8,9,10 };

//	double* p = find<double>(x, x + 10, 3); // ok

	double* p = find(x, x + 10, 3); // error


	if (p == nullptr)
		std::cout << "not found" << std::endl;
	else
		std::cout << "found : " << *p << std::endl;
}