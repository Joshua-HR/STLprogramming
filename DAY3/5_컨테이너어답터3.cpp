#include <stack>
#include <queue> // queue, priority_queue
#include <list>
#include <vector>
#include <deque>
#include "show.h"

int main()
{
	// stack : ���� ���⸸ ���� ������ �˴ϴ�.
	// queue : ���� ������ ���� �־�� �մϴ�.
	// 
	// vector : ������ ���� �ֽ��ϴ�.
	// 
	// ������ �߸��� �ڵ带 ��� ��� ������
	std::stack<int, std::list<int>>   s1;
	std::stack<int, std::vector<int>> s2;
	std::stack<int, std::deque<int>>  s3;

	std::queue<int, std::list<int>>   q1;
	std::queue<int, std::vector<int>> q2;	// �߸��� �ڵ�!
											// queue �� ���鶧��
											// vector �� ����ϸ� �ȵ˴ϴ�.
	std::queue<int, std::deque<int>>  q3;

	// �׷��� q2 ���� ��?? ������ ���� �ʳ��� ?
	// => q2.pop()�� �ϴ� �ڵ忡�� ���� �߻�

	q2.push(10);  // ok.. �������� ��������.. vector �� push_back �� �ִ�

	q2.pop(); // error. pop_front() �� ����.
}



