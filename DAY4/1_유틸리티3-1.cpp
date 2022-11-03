#include <iostream> 
#include <fstream>  
#include <sstream>  
#include <string>

int main()
{
	double pi = 3.141592;

	// pi를 사용해서 문자열("pi = 3.141592") 로 만들려고 합니다.
	// C 방식
//	char s[32];
//	sprintf(s, "pi = %f", pi);  // pi 값에 따라 
								// 버퍼 오버플로우 가능성 있습니다.

//	snprintf(s, 32, "pi = %f", pi);	// 버퍼오버플로우는 없지만
									// 데이타 손실 
							
	// C++ 스타일
	std::ostringstream oss;

	oss << "pi = " << pi;	// cout 과 동일한 사용법

	std::string s = oss.str();

	std::cout << s << std::endl;
}
