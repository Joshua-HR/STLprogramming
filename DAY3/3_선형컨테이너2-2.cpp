#include <vector>
#include <iostream>

int main()
{
	std::vector<int> v = { 1,2,3,4,5 };

	//[] �� at
	// [] : �߸��� �ε��� ����ص� ���� �߻��ȵ�. ���α׷� ������ ����
	// at : �߸��� �ε��� ���� ���� �߻�
	try
	{
		v.at(10) = 20;
	}
	catch (std::out_of_range& e)
	{
		std::cout << e.what() << std::endl;
	}
}