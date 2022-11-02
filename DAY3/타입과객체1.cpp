// 타입과객체1.cpp

template<typename T> void foo(T arg) {}
template<typename T> class list {};

int main()
{
	int n = 10;
	// foo : 함수(템플릿) 입니다.
	// list: 클래스(템플릿) 입니다.

	// 다음중 잘못된 것을 모두 고르세요 
	foo(int);	// error
	foo(n);		// ok. 함수의 인자는 객체(변수)를 전달합니다.

	list<int> s1; // ok
	list<n>   s2; // error. 템플릿 인자는 타입을 전달해야 합니다.
	
	// 함수 인자 : 타입이 아닌 객체 전달
	// 템플릿인자 : 타입전달
}

