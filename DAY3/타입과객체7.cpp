// Ÿ�԰���ü7

template<typename Pr>
class pqueue
{
public:
};

int main()
{
	auto cmp = [](int a, int b) { return a < b; };

	pqueue<decltype(cmp)> pq; 
}