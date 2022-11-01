#include <iostream>
#include <list>
#include <algorithm>
#include "show.h"

// �Ʒ� �ڵ��� transform �� ������ ���ڴ� ���� �Լ� �̾�� �մϴ�.
int foo(int a, int b)
{
    return a + b;
}

int main()
{
    std::list<int> s1 = { 1,2,3,4,5};
    std::list<int> s2 = { 6,7,8,9,10,5,6,7,8 };
    std::list<int> s3;

    // transform �˰���
    // => ���� �����մϴ�. �� ������ ������
    // => �Ʒ� �ڵ带 ���� "foo" �Լ��� ���(��ȯŸ��, ����)�� �����غ�����

    // => �Ʒ� �ڵ忡�� ������ "s1�� ��� ���� <= s2��� ����" �̾�� �մϴ�. 
    std::transform(s1.begin(), s1.end(), // �� ������ ��Ҹ�
                   s2.begin(),  // �� ������ ��ҿ� �Բ� foo�Լ���
                   //s3.begin(),  // foo �Լ��� ����� �� ������
                   std::back_inserter(s3), 
                   foo);        // 

    show(s3);
	return 0;
}



















//
