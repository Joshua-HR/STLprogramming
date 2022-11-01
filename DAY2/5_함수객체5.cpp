#include <iostream>
#include <vector>
#include <algorithm>

class IsDivide
{
public:
	bool operator()(int n)
	{
		return n % 3 == 0;
	}
};

int main()
{
	std::vector<int> v = { 1,2,9,3,4,5,6,7,8 };

	IsDivide f;

	auto ret1 = std::find_if(v.begin(), v.end(), f);

}
