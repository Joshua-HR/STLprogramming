#include <iostream>
#include <vector>
#include <algorithm>

class IsDivide
{
	int value;
public:
	IsDivide(int n) : value(n) {}

	bool operator()(int n)
	{
		return n % value == 0;
	}
};
int main()
{
	int k = 3;
	std::vector<int> v = { 1,2,9,3,4,5,6,7,8 };

	IsDivide f(k);	// 1. f는 단항함수(객체) 입니다.
					// 2. 그런데, main 함수의 지역변수인 k의 값을 보관(캡쳐)하는
					//    기능이 있습니다.

	bool b = f(10); // f 는 인자가 한개인 함수(객체) 입니다.
					// 10이 k의 배수인가 ?

	auto ret1 = std::find_if(v.begin(), v.end(), f);
							// 결국 "단항함수 + 지역변수 k"를 전달
							// 즉, 지역변수 k를 캡쳐한 단항함수!!

	// 아래 처럼 임시객체를 만드는 형태로 전달해도 됩니다.
	auto ret2 = std::find_if(v.begin(), v.end(),  IsDivide(k) );
}
