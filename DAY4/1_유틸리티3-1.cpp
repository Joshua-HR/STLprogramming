#include <iostream> 
#include <fstream>  
#include <sstream>  
#include <string>

int main()
{
	double pi = 3.141592;

	// pi�� ����ؼ� ���ڿ�("pi = 3.141592") �� ������� �մϴ�.
	// C ���
//	char s[32];
//	sprintf(s, "pi = %f", pi);  // pi ���� ���� 
								// ���� �����÷ο� ���ɼ� �ֽ��ϴ�.

//	snprintf(s, 32, "pi = %f", pi);	// ���ۿ����÷ο�� ������
									// ����Ÿ �ս� 
							
	// C++ ��Ÿ��
	std::ostringstream oss;

	oss << "pi = " << pi;	// cout �� ������ ����

	std::string s = oss.str();

	std::cout << s << std::endl;
}
