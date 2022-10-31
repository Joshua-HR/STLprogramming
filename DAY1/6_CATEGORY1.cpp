#include <forward_list> // �̱� ��ũ�� ����Ʈ �Դϴ�. C++11 �߰�
#include <list>			// ���� ��ũ�� ����Ʈ �Դϴ�. C++98 

int main()
{
	std::forward_list<int> s1 = { 1,2,3 };

	std::list<int> s2 = { 1,2,3 };

	auto p1 = s1.begin();
	auto p2 = s2.begin();
	
	// �Ʒ� �ڵ忡�� ������ ã�� ������.
	++p1;	// ok
	--p1;	// error
	++p2;	// ok
	--p2;	// ok

	// �̱۸���Ʈ�� �ݺ��ڴ� -- �Ҽ� �����ϴ�.

	// �ݺ��ڴ� ��ɿ� ���� 5������ �з� �մϴ�.(iterator category)
	// 53 page
}