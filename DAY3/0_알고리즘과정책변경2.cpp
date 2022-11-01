#include <iostream>
#include <vector>
#include <list>
#include <functional>
#include <algorithm> 
#include <numeric>	 
#include "show.h"

int main()
{
	std::vector<int> v1 = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> v2;

	// <numeric> ����� "��ġ ���" ���� �پ��� �˰����� �ֽ��ϴ�.

	std::partial_sum(v1.begin(), v1.end(), std::back_inserter(v2));
	show(v2); // 1, 3, 6, 10, 15 ...  


	// ��κ��� ��ġ �˰����� ���� ��� ��ü �˴ϴ�.
	std::partial_sum(v1.begin(), v1.end(), v2.begin(), 
								std::multiplies<int>() );

	show(v2);


	// �������� ���ϴ� �˰���
	std::adjacent_difference(v1.begin(), v1.end(), v2.begin());

	show(v2);
}