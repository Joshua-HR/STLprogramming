#include <iostream>


// 함수 객체의 장점 1. 
// => 함수 객체는 동작 뿐 아니라 상태도 가질수 있습니다.
// => 멤버 데이타가 있다는 의미.

class URandom
{
	// 멤버 데이타!!
public:
	int operator()()
	{
		// 여기서 생성된 데이타는 멤버 데이타에 저장 가능.. 
		return rand() % 10;
	}
};

URandom urand;	// urand 는 객체지만 () 연산자가 재정의 되어 있으므로
				// 함수 처럼 사용가능합니다.

int main()
{
	for (int i = 0; i < 10; i++)
		std::cout << urand() << std::endl;
}





