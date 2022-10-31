// 6_CATEGORY2-2 - ALGORITHM6 을 복사 하세요
#include <iostream>

template<typename InputIter, typename T>
InputIter find(InputIter first, InputIter last, const T& value)
{
	while (first != last && *first != value)
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