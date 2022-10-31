#include <iostream>
#include <vector>
#include <list>

/*
void print_first_element(std::vector<int>& v)
{
	int n = v.front();

	std::cout << n << std::endl;
}
*/
/*
template<typename T>
void print_first_element(std::vector<T>& v)
{
	T n = v.front();

	std::cout << n << std::endl;
}
*/

template<typename T>
void print_first_element(T& v)
{
	// auto ����, ��Ȯ�� Ÿ������ �غ�����.
	
	// T			 : list<double> �ε�.. �츮�� ���ϴ� ���� "double" �Դϴ�.
	// T::value_type : list<double>::value_type �̹Ƿ� "double"

	T::value_type n = v.front();

	std::cout << n << std::endl;
}



int main()
{
//	std::vector<int>    v = { 1,2,3,4,5,6,7,8,9,10 };
//	std::vector<double> v = { 1,2,3,4,5,6,7,8,9,10 };
	std::list<double>   v = { 1,2,3,4,5,6,7,8,9,10 };

	print_first_element(v);
}

// ���ø� ������� �����̳ʸ� ���鶧, �����̳ʰ� �����ϴ� Ÿ��
// �� �˰� �������� �ֽ��ϴ�.
// �׷���, �Ʒ�ó�� STL �� ��������ϴ�.
/*
template<typename T> class list
{
public:
	using value_type = T; // �� ������ �ٽ� �Դϴ�.
};

list<int> s = { 1,2,3,4 };

list<int>::value_type n = s.front(); // n �� Ÿ���� ������ ������
*/

