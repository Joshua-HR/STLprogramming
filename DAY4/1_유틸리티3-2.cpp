#include <iostream> 
#include <fstream>  
#include <sstream>  
#include <string>

int main()
{
	std::ostringstream oss; // �޸�(���ڿ�) ��� ��Ʈ��
	oss << "hello";

	std::istringstream iss("to be or not to be");

	std::string s;
//	iss >> s;	// "to" ��, iss �� ���� ���ڿ����� 1��° �ܾ�


	while (iss >> s)
		std::cout << s << std::endl;

}
