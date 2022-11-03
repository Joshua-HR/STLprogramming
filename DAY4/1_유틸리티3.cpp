// C++은 3개의 표준 스트림이 있습니다.
#include <iostream> // 1. 표준 입출력 스트림
#include <fstream>  // 2. 화일 스트림
#include <sstream>  // 3. 메모리(스트링)스트림
#include <string>

// 핵심 1. 표준 입출력 스트림은 객체가 이미 생성되어 있습니다.
// ostream cout;
// istream cin;

int main()
{
	// 핵심 2. 파일 입출력 스트림 객체는 사용자가 만들어서 사용하면됩니다.
	// => cout, cin 과 사용법 동일
	std::ofstream fout("a.txt");

	// 핵심 3. 메모리(string) 스트림은 메모리(문자열)에 출력
	std::ostringstream oss;

//	std::cout << "hello";	// 표준 출력에 출력
//	fout	  << "hello";	// 파일로 출력
	oss       << "hello";   // oss 의 내부에 있는 문자열에 출력

	std::string s = oss.str(); // oss 의 내부 문자열 꺼내기

	std::cout << s << std::endl;
}
