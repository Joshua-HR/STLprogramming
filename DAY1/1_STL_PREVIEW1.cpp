// 1_STL_PREVIEW1
#include <iostream>
#include <string>

int main()
{
	// C 언어 문자열 : 문자열 배열, 문자열 포인터
	char s1[] = "Hello";
	char s2[] = "Hello";

	if (s1 == s2) {} // 의도 : 문자열 자체를 비교
					 // 결과 : 배열의 주소 비교, 항상 false
					 // 의도 대로 하려면 strcmp() 사용
	if (strcmp(s1, s2) == 0) {}

//	s2 = s1; // 의도 : 문자열 복사
			 // 결과 : 배열이 이름은 상수 이므로 error
			 // 의도대로 하려면 strcpy(), strcpy_s() 를 사용

	// C++ 에서는 string 클래스 제공
	std::string s3 = "hello";
	std::string s4;

	s4 = s3; // 대입도 되고
	s4 = s4 + s3; // + 도 가능.
				  // s4 * 3 => s4 + s4 + s4 의도 인데 C++ 은 안됩니다.

	std::cout << s4 << std::endl; // 출력도 되고

	if (s3 == s4) {} // 비교도 바로 가능.  

}
