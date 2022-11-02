#include <vector>

class queue1
{
	std::vector<int> q;
public:
	void pop()
	{
		q.pop_front();
	}
};

int main()
{
	queue1 q1;
}
