#include <iostream>
#include <string>
#include <functional>
#include <iterator>
#include <algorithm>

template<typename Container>
void show(const Container& c)
{
	for (auto e : c)
	{
		std::cout << e << ", ";
	}
	std::cout << std::endl;
}

template<typename Iter>
void show(Iter first, Iter last)
{
	std::ostream_iterator< typename Iter::value_type > p(std::cout, ", ");

	std::copy(first, last, p);

	std::cout << std::endl;
}