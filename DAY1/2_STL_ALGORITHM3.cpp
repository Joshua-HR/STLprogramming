#include <iostream>

// 3. 검색 대상 타입의 일반화 - 템플릿 도입
// => 템플릿 을 사용해서 모든 타입의 배열에서 선형 검색을 수행
// => 함수이름 "xstrchr" => "find"

// 주의. 10개 배열에서 검색하려면 "x+9" 가 아닌 "x+10" 사용


template<typename T>
T* find(T* first, T* last, T c)
{
	while (first != last && *first != c)
		++first;

	return first == last ? nullptr : first;
}

int main()
{
	double x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	double* p = find(x, x + 10, 3.0);


	if (p == nullptr)
		std::cout << "not found" << std::endl;
	else
		std::cout << "found : " << *p << std::endl;
}