#include <iostream>
#include <list>

// �Ʒ� �ҽ��� �ٽ� 
// typename T::value_type : �ݺ��� T�� ����Ű�� ����� Ÿ��

// sum �� ��ȯ Ÿ���� ǥ���ϴ� ���� �˾� �μ���.

template<typename T> 
typename T::value_type sum(T first, T last)
{
	// T : �ݺ��� Ÿ��
	// typename T::value_type : �ݺ��ڰ� ����Ű�� ����� Ÿ��
	typename T::value_type s = 0;

	while (first != last)
	{
		s = s + *first;
		++first;
	}
	return s;
}

int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };

	int n = sum(s.begin(), s.end());	// ��ǥ!!!

	std::cout << n << std::endl; // 55
}