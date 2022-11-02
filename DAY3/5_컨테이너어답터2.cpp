// Container Adapter
// => 3���� sequence container �� �Լ��̸��� �����ؼ� �����
// 
// 3���� �����̳� ����Ͱ� �ֽ��ϴ�.
#include <stack>	// stack
#include <queue>	// queue, priority_queue
#include "show.h"

int main()
{
	std::stack<int> s1;
	s1.push(10);
	s1.push(20);

	std::cout << s1.top() << std::endl; // 20. ��ȯ��, ���� �ȵ�
	std::cout << s1.top() << std::endl; // 20

	s1.pop(); // ���Ÿ� 

	std::cout << s1.top() << std::endl; // 10
	//=======================================================
	
	std::queue<int> q; // First In First Out
	q.push(10);
	q.push(20);

	std::cout << q.front() << std::endl; // 10
	
	q.pop();

	std::cout << q.front() << std::endl; // 20

}