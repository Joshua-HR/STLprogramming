#include <iostream>
#include <list>


// 반복자는
// 1. 클래스로 만든 "객체형태의 반복자"
// 2. "Raw Pointer" 
// 가 있습니다.

// 이 2개의 차이점 때문에 아래 "sum" 같은 일반화 함수를 만들기 어렵습니다.

// 아래 코드가 이 문제를 해결해는 도구입니다.
template<typename T> struct iterator_traits
{
	using value_type = typename T::value_type;
};

// T 가 "Raw Pointer" 라면 위 템플릿 말고 아래 템플릿 사용하겠다는것 !!
template<typename T> struct iterator_traits<T*>
{
	using value_type = T;
};

template<typename T>
typename std::iterator_traits<T>::value_type sum(T first, T last)
{
//	typename T::value_type s = 0; 
	
	// T가 객체형 반복자 : 아래 value_type 은 결국 "T::value_type"
	// T가 raw pointer(int*등) 라면 value_type : int
	typename std::iterator_traits<T>::value_type s = 0;




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
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	int n1 = sum(s.begin(), s.end());	// 객체형 반복자
	int n2 = sum(x, x + 10);			// raw pointer

	std::cout << n1 << std::endl;
	std::cout << n2 << std::endl;

	// 핵심
	// 반복자 T가 가리키는 타입 얻기
	// typename T::value_type    : T가 객체형 반복자일때만 가능
	//								   Raw Pointer 라면 에러

	// typename std::iterator_traits<T>::value_type  
	//							=> T가 raw pointer 라도 ok..!!
	//							=> 가장 좋은 코드.

}