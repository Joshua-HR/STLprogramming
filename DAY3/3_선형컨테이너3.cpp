#include <vector>
#include <iostream>
#include <algorithm>
#include "show.h"

// capacity ���� - �߿� �մϴ�.

int main()
{
	std::vector<int> v(10, 0);

	v.resize(7); // ��� ����������� ?
				 // �޸� ��ü�� �������� �ʰ�
				 // size ������ ����

	std::cout << v.size()	  << std::endl; // 7
	std::cout << v.capacity() << std::endl; // 10


	v.push_back(3); // ���� �Ѱ� ���(3) �߰�
					// size < capaciy ��Ȳ�̹Ƿ�
					// �� ������ "not expensive" �Դϴ�.
					
					// �� ���(capacity > size)�� list ���� vector ��
					// "push_back" ������ �����ϴ�.

	std::cout << v.size()     << std::endl; // 8
	std::cout << v.capacity() << std::endl; // 10

	//==================================================
	v.shrink_to_fit();	// ������ �޸𸮴� �ʿ� ���ٴ� ��
						// �� ��� �޸��� ���Ҵ��� �߻��մϴ�.
						// �ݺ��� ��ȿȭ �˴ϴ�.
	std::cout << v.size()     << std::endl; // 8
	std::cout << v.capacity() << std::endl; // 8

	//=======================================
	v.push_back(3); // ���� �Ѱ� �߰�
					// size == capacity ���� �Դϴ�.
					// "�޸� ���Ҵ� �ʿ�"
					// "expensive" !

	std::cout << v.size()     << std::endl; // 9
	std::cout << v.capacity() << std::endl; // VC++ : 1.5 ������ 
											// => 8 * 1.5 = 12
											// g++ : 2������
											// => 8 * 2 = 16
				
}




