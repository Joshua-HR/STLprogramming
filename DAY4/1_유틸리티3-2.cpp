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

	// C++23 ���� std::print ���ɴϴ�
	// �Ʒ�ó�� ����մϴ�. cout ���� ������, ���մϴ�.
//	std::print("n = {0}, s = {1}", 10, "AA");
//	std::println("n = {0}, s = {1}", 10, "AA");
}
