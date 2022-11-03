// C++�� 3���� ǥ�� ��Ʈ���� �ֽ��ϴ�.
#include <iostream> // 1. ǥ�� ����� ��Ʈ��
#include <fstream>  // 2. ȭ�� ��Ʈ��
#include <sstream>  // 3. �޸�(��Ʈ��)��Ʈ��
#include <string>

// �ٽ� 1. ǥ�� ����� ��Ʈ���� ��ü�� �̹� �����Ǿ� �ֽ��ϴ�.
// ostream cout;
// istream cin;

int main()
{
	// �ٽ� 2. ���� ����� ��Ʈ�� ��ü�� ����ڰ� ���� ����ϸ�˴ϴ�.
	// => cout, cin �� ���� ����
	std::ofstream fout("a.txt");

	// �ٽ� 3. �޸�(string) ��Ʈ���� �޸�(���ڿ�)�� ���
	std::ostringstream oss;

//	std::cout << "hello";	// ǥ�� ��¿� ���
//	fout	  << "hello";	// ���Ϸ� ���
	oss       << "hello";   // oss �� ���ο� �ִ� ���ڿ��� ���

	std::string s = oss.str(); // oss �� ���� ���ڿ� ������

	std::cout << s << std::endl;
}
