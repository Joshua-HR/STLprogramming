#include <iostream>
#include <vector>
#include <list>

/*
void print_first_element(std::vector<int>& v)
{
	int n = v.front();

	std::cout << n << std::endl;
}
*/
/*
template<typename T>
void print_first_element(std::vector<T>& v)
{
	T n = v.front();

	std::cout << n << std::endl;
}
*/

template<typename T>
void print_first_element(T& v)
{
	// auto 말고, 정확한 타입으로 해보세요.
	
	// T			 : list<double> 인데.. 우리가 원하는 것은 "double" 입니다.
	// T::value_type : list<double>::value_type 이므로 "double"

	T::value_type n = v.front();

	std::cout << n << std::endl;
}



int main()
{
//	std::vector<int>    v = { 1,2,3,4,5,6,7,8,9,10 };
//	std::vector<double> v = { 1,2,3,4,5,6,7,8,9,10 };
	std::list<double>   v = { 1,2,3,4,5,6,7,8,9,10 };

	print_first_element(v);
}

// 템플릿 기반으로 컨테이너를 만들때, 컨테이너가 저장하는 타입
// 을 알고 싶을때가 있습니다.
// 그래서, 아래처럼 STL 을 만들었습니다.
/*
template<typename T> class list
{
public:
	using value_type = T; // 이 한줄이 핵심 입니다.
};

list<int> s = { 1,2,3,4 };

list<int>::value_type n = s.front(); // n 의 타입을 생각해 보세요
*/

