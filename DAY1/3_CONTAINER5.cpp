#include <iostream>

// STL : Standard Template Library

// Container : list, vector ���� �ڷᱸ���� Ŭ������ �����
#include <vector>
#include <list>
#include <string>

// �츮�� ���� find ���� �Ϲ� �Լ��� �˰��� �̶�� �մϴ�.
#include <algorithm> // ��κ� ������� �ֽ��ϴ�.

int main()
{
	std::vector<int> c = { 1,2,3,4,5,6,7,8,9,10 }; 

	// ������ �˰����� std::reverse �Դϴ�. ������ ������
	// ??

	for (int e : c)
		std::cout << e << std::endl;
}
