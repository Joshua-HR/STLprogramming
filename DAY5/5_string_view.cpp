// 5_string_view
#include <iostream>
#include <string>
#include <string_view> 

int main()
{
	// �ٽ� 1. string �� ����.
	// SSO : small string optimization - C++11
	// ���ڿ��� ���̰� ��(���� 16��) ��츸 ���� ���ڿ� ����
	// �F�� ���ڿ��� ��ü ��ü�� ����
	std::string s1 = "to be or no to be";
	std::string s2 = "hello";
	//===========================================


	std::string s = "to be or no to be"; 

	// �ٽ� 2. C++17 �� string_view
	// => �Ʒ� 2���� �������� �ٽ�
	std::string		 st = s;
	std::string_view sv = s;      

	std::cout << sizeof(sv) << std::endl; // 8



	// �ٽ� 2. �Ʒ� 2���� ������.
	std::string		 st2 = "to be or no to be";
	std::string_view sv2 = "to be or no to be";
}