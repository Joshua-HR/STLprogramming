class Test
{
public:
	enum { value = 1 };
	typedef int DWORD; // using DWORD = int
};
int p = 0;

template<typename T> void foo(T a)
{
	// 아래 2줄에서 * 의 의미를 생각해 보세요(1. 곱하기, 2. 포인터 변수 선언)
	
	// 핵심 1. "클래스이름::이름" 에서 "이름"의 의미는 
	
	// "값" 일수 있다.  : enum 상수나 static 멤버 데이타
	// "타입"일수도 있다 : typedef 또는 using 

//	Test::value * p;	// "1 * 0"  즉, * 는 곱하기의 의미
//	Test::DWORD * p;	// "int* p" 즉, * 는 포인터 변수의 선언

	// 위 내용을 참고해서 아래 코드를 해석해 보세요
	// "dependent name" : 템플릿 인자 T의 의존해서 꺼내는 이름
	// => 컴파일러는 이름의 의미를 무조건 "값" 으로 취급 합니다.
	T::value * p; // ok
//	T::DWORD * p; // error. 가끔 vc2017 에서 에러가 나지 않는
				  // 경우도 있는데, 표준에서는 에러 이고
				  // VC 도 코드가 좀더 복잡한 경우는 에러입니다.

	typename T::DWORD* p; // ok
		// => dependent name 을 "값" 이 아닌 "타입"의 이름으로
		//    해석해 달라는것
		
}



int main()
{
	Test t;
	foo(t);
}