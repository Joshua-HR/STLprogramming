#include <vector>
#include <iostream>
#include <algorithm>
#include "show.h"

// ���������̳ʴ� ������ �����ϹǷ�
// vector �� �������� �����մϴ�.
// ��κ��� �ڵ�� list �� deque ���� ����˴ϴ�.

int main()
{
	// 1. ����
	std::vector<int> v1;		// ��Ұ� 0��
	std::vector<int> v2(10);	// ��� 10���� 0���� �ʱ�ȭ
	std::vector<int> v3(10, 3);	// 10���� 3���� �ʱ�ȭ
	std::vector<int> v4(v3);	// v3����

	std::vector<int> v5 = { 1,2,3 }; // 3���� 1,2,3 ���� �ʱ�ȭ
	std::vector<int> v6{ 1,2,3 };    // ���� ����
	

	// �ٽ�. �Ʒ� 2�� ������ �ݵ�� �˾� �μ���
	std::vector<int> v7(10, 3);
	std::vector<int> v8{ 10, 3 };



	// 2. ����, 


	// 3. ����
	
	// 4. ��� ����

}