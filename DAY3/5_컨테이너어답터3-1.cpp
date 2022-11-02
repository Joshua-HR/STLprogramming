// 3_컨테이너어답터3-1

/*
// 아래 코드에서 컴파일시 에러가 나오는 곳을 찾으세요
class A
{
	int data;
public:
	void foo()
	{
		*data = 10;		// error
	}
};
int main()
{
	A a;
}
*/
//==================================================

template<typename T>
class A
{
	T data;
public:
	void foo()
	{
		*data = 10;		
	}
};

int main()
{
	A<int> a;

	a.foo(); // 사용한 멤버 함수만 실제 "C++ 함수"로 생성됩니다.
			 // 지연된 인스턴스화라고 합니다.
}