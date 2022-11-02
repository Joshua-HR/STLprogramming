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
		v.at(10) = 20;
	}
	catch (std::out_of_range& e)
	{
		std::cout << e.what() << std::endl;
	}
}