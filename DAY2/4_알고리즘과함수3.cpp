// 4_�˰�����Լ�3   "3_algo1-1.cpp" ����
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

// ������(predicator) : ��ȯ Ÿ���� bool (�Ǵ� bool�� ��ȯ ����)
//						�� �Լ�

// find_if �� 3��° ���ڴ� "���� ������(unary predicator)" �̾�� �մϴ�.

bool foo(int n)
{
	return n % 3 == 0;
}

int main()
{
	std::vector<int> v = { 1,9,3,1,2,3,1,2,3,1 };

	// �־��� �������� "3"�� ã�ƶ�!
	auto p1 = std::find(v.begin(), v.end(), 3);

	// �־��� �������� 1��° ������ "3�� ���"�� ã�ƶ�!
	auto p2 = std::find_if(v.begin(), v.end(), foo);

	// std::find    : ��   �˻�, 3��° ���ڷ� "��" ����
	// std::find_if : ���� �˻�, 3��° ���ڷ� "�Լ�" ����


	// C++11 ���ʹ� "�Լ��� ���� ����� ���ٴ�"
	// "���� ǥ����"�� �����մϴ�.

	// ����ǥ���� : �Լ��̸�(�ּ�)�� �ʿ��� �ڸ��� �͸��� �Լ��� ����
	//			  ����� ���� -C++11 ���� �����Ǵ� ����

	// [] : lambda introducer. ���� ǥ������ ���۵��� �˸��� ��ȣ.
	auto p3 = std::find_if(v.begin(), v.end(), 
							[](int n) { return n % 3 == 0; });

}




