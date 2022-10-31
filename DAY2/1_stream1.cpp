#include <iostream>
#include <iterator>
#include <list>

int main()
{
	int n = 10;

	// ȭ�� ����ϴ� ���
	// 1. std::cout �Ǵ� printf ���
	std::cout << n << std::endl;


	// 2. ostream_iterator �� ����ϴ� ���
	// => ����� �Ҷ� ����ϴ� �ݺ���

	std::ostream_iterator<int> p(std::cout, " ");
	
	*p = 10; // std::cout << 10 << " "; �� ���� �ڵ�
	*p = 20; 

	++p; // ostream_iterator �� ++ �� �ϴ� ���� �����ϴ�.
		 // ������ ��� �ݺ��ڴ� ++ ������ �����ؾ� �մϴ�.


	std::list<int> s = { 1,2,3 };

	// ��� �ݺ��� ���п� �����̳��� ��� ��Ҹ� ����Ҷ�
	// std::copy ���� ���� ����ؼ� ���ٷ� �Ҽ� �ֽ��ϴ�.
	std::copy(s.begin(), s.end(), p);
					// => std::copy �� ���������� ������ ������
					//    p �� ++ �� �̵��ϴ� �ڵ尡 �ֽ��ϴ�.
					//    �׷��� copy �� ����Ϸ��� ��� �ݺ��ڴ�
					//    �ϴ����� ���� ��쿡�� ++ �� �����ؾ� �մϴ�.
}

