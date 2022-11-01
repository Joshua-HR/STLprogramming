#include <iostream>
#include <list>
#include <algorithm>

int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7,3,9,10 };

	// ���ݺ��ڸ� ����� ��� 1. Ŭ������ ���� ���
	std::reverse_iterator< std::list<int>::iterator > p1( s.end() );


	// ��� 2. ���ݺ��ڸ� ����� �Լ��� ��� 
	auto p2 = std::make_reverse_iterator(s.end());
	auto p3 = std::make_reverse_iterator(s.begin());


	// ��� 3. �����̳��� rbegin(), rend() ��� �Լ� ���
	auto p4 = s.rbegin(); // std::make_reverse_iterator(s.end()) �� ����
	auto p5 = s.rend();   // std::make_reverse_iterator(s.begin());

}






