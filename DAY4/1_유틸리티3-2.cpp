#include <iostream> 
#include <fstream>  
#include <sstream>  
#include <string>

int main()
{
	std::ostringstream oss; // 메모리(문자열) 출력 스트림
	oss << "hello";

	std::istringstream iss("to be or not to be");

	std::string s;
//	iss >> s;	// "to" 즉, iss 가 가진 문자열에서 1번째 단어


	while (iss >> s)
		std::cout << s << std::endl;

	// C++23 에서 std::print 나옵니다
	// 아래처럼 사용합니다. cout 보다 빠르고, 편리합니다.
//	std::print("n = {0}, s = {1}", 10, "AA");
//	std::println("n = {0}, s = {1}", 10, "AA");
}
