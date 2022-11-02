// 타입과객체1.cpp

template<typename T> void foo(T arg) {}
template<typename T> class list {};

int main()
{
	int n = 10;
	// foo : 함수(템플릿) 입니다.
	// list: 클래스(템플릿) 입니다.

	// 다음중 잘못된 것을 모두 고르세요 
	foo(int);
	foo(n);

	list<int> s1;
	list<n>   s2;
}

