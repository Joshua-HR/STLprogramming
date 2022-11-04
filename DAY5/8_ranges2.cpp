#include <iostream>
#include <vector>
#include <ranges> 
#include <algorithm>


// �Ʒ� Ŭ������ �ٽ� �Դϴ�.
template<typename T>
class take_view
{
	T& range;
	int count;
public:
	take_view(T& r, int c) : range(r), count(c) {}

	auto begin() { return range.begin(); }
	auto end()   { return range.begin() + count; }
};

int main()
{
	std::vector<int> v = {1,2,3,4,5,6,7,8,9,10 };

	take_view tv(v, 5); // C++17 ����, Ÿ�� ���� ��������

//	for (auto n : v) 
	for (auto n : tv)
		std::cout << n << ", ";

}