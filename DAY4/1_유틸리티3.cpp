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


	std::cout << "hello";	// ǥ�� ��¿� ���
	fout	  << "hello";	// ���Ϸ� ���

}
