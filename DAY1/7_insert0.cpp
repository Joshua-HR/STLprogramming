// 7_insert0
// STL 에서 널리 사용하는 기술 

template<typename T> T square(T a)
{
	return a * a;
}

template<typename T> class list
{
public:
	list(int sz, T value) {}
};

int main()
{
	// 다음중 쉬워 보이는 것은 ?
	square<int>(3);
	square(3);
}
