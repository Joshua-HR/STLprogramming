// 5_string_view
#include <iostream>
#include <string>
#include <string_view>

void* operator new(std::size_t sz)
{
	std::cout << sz << "�޸� �Ҵ�" << std::endl;
	return malloc(sz);
}

// ���ڷ� ���ڿ��� �ް� �ͽ��ϴ�. �б⸸ �ϸ� �˴ϴ�

// ��� 1. call by value : ��ü�� ���ڿ� ��� ���纻 ����
// => �ʹ� ������� Ů�ϴ�. ������� ������!!
// void foo(std::string name) { }

// ��� 2. const string& 
// => ���纻 �����ϴ�. ���� ���
// => ������, �������� �ֽ��ϴ�.

void foo(const std::string& name) { }

// ��� 3. C++17 string view
// => call by value �� ����ϴ� �� �Դϴ�.
void foo(std::string_view name) { }


int main()
{
//	std::string s = "sdjfsljflsjlsdkjfssfsd";
//	foo(s);

	foo("sdjfsljflsjlsdkjfssfsd"); // �� ��츦 ������ ���ô�.
}






