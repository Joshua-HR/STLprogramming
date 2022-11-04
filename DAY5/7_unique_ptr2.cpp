#include <memory>
#include <iostream>

// C++ ǥ�� ����Ʈ �����ʹ� 3�� �Դϴ�.
// std::shared_ptr : �ڿ��� ����
// std::weak_ptr   : �ڿ��� ������ ����
// std::unique_ptr : �ڿ��� ������ ����

int main()
{
	
	std::unique_ptr<int> up1(new int);
//	std::unique_ptr<int> up2 = up1;	// error
	std::unique_ptr<int> up2 = std::move(up1);	// ok

	// unique_ptr �� ������尡 ���� �����ϴ�.
	std::cout << sizeof(up1) << std::endl; // "raw pointer �͵���"
}