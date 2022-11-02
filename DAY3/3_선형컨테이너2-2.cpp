#include <vector>
#include <iostream>

int main()
{
	std::vector<int> v = { 1,2,3,4,5 };

	//[] 와 at
	// [] : 잘못된 인덱스 사용해도 예외 발생안됨. 프로그램 비정상 종료
	// at : 잘못된 인덱스 사용시 예외 발생
	try
	{
	//	v.at(10) = 20;
	//	v[10] = 20;   // 내부적으로 index 확인도 안합니다.
					  // 그냥 시작주소[10] = 20 입니다.
	}
	catch (std::out_of_range& e)
	{
		std::cout << "예외 : " << e.what() << std::endl;
	}
	//====================================
	for (int i = 0; i < v.size(); i++)
	{
		// 다음중 좋은 코드는 ?
		v.at(i) = 0; // 1
		v[i]    = 0; // 2
	}
}