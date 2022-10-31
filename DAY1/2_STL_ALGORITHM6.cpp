#include <iostream>

// find �˰��� ����

// �˻� ���� : ���� Ÿ���� �迭�� [first, last) �������� �����˻�
//	          last �� �˻� ��� �ƴ�.
// 
// ������ �̵� : ������ ++ ������

// ������ ǥ�� : �����Ϳ� �����ϰ� �����ϴ� ��ü(�ݵ�� �������� �ʿ����)
//             ++, *, ==, != �� ������ �����ؾ� ��.
// ���н� ��ȯ�� : last

// 1,2��° ���� : ������ �Ǵ� �����Ϳ� ���� ��ü 
//				=> ũ�Ⱑ ũ�� �ʴ�.  call by value
// 
// 3��° ���� : ���� Ÿ���� ��ü - const reference ���

// �Ʒ� find �� �̹� C++ ǥ�ؿ� �ֽ��ϴ�. <algorithm> ���!!
template<typename T1, typename T2>
T1 find(T1 first, T1 last, const T2& c)
{
	while (first != last && *first != c)
		++first;

	return first;
}




int main()
{
	double x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	double* p = find(x, x + 3, 5);

	if (p == x + 3)
		std::cout << "not found" << std::endl;
	else
		std::cout << "found : " << *p << std::endl;
}