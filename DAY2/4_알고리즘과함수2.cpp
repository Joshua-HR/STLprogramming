#include <iostream>
#include <list>
#include <algorithm>
#include "show.h"


int main()
{
    std::list<int> s1 = { 1,2,3,4,5};
    std::list<int> s2 = { 6,7,8,9,10 };
    std::list<int> s3;

    // transform �˰���
    // => ���� �����մϴ�. �� ������ ������

    std::transform(s1.begin(), s1.end(), // �� ������ ��Ҹ�
                   s2.begin(),  // �� ������ ��ҿ� �Բ� foo�Լ���
                   s3.begin(),  // foo �Լ��� ����� �� ������
                   foo);        // 

	return 0;
}



















//
