#include <iostream>
#include <vector>
#include <algorithm>

// show �� ����� ���ô�.
// 1. Container ����
template<typename Container>
void show(const Container& c)
{
	// �����̳��� ��� ��Ҹ� ����ϴ� ����� ���� ���� ����
	// C++11 �� range for �Դϴ�.
	for (auto e : c)
	{
		std::cout << e << ", ";
	}
	std::cout << std::endl;
}
// 2. �ݺ��� ����
// => �ݺ��ڴ� ũ�Ⱑ ���� Ÿ���Դϴ�. 
//    "call by value" �� ����ص� ������ �ʽ��ϴ�.
template<typename Iter>
void show(Iter first, Iter last)
{
	std::ostream_iterator< ? > p(std::cout, ", ");

	std::copy(first, last, p);

	std::cout << std::endl;
}


int main()
{
	std::vector<int> v = { 1,2,3,4,5 };

	show(v);
	show(v.begin(), v.end());
}

