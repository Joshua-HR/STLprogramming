// 6_CATEGORY2-1
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main()
{
	// �ٽ� 1. �� �����̳ʰ� ���� �ݺ��ڰ� 5���� category �߿�
	//        ��� ���ϴ��� �ݵ�� �˾� �μ���
	std::vector<int> v = { 1,2,3,4 }; // �������� �ݺ��ڸ� ����
	std::list<int> s   = { 1,2,3,4 }; // ����� �ݺ��ڸ� ����

	// �ٽ� 2. �� �˰����� �䱸�ϴ� �ݺ����� ������ �˾� �μ���
	std::sort(v.begin(), v.end());
//	std::sort(s.begin(), s.end());
}