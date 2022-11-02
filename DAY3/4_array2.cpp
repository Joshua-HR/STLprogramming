#include <vector>
#include <algorithm>
#include "show.h"

// C++11 ����, ��� ��Ұ� ���ÿ� ���̴� ���ο� �����̳ʸ� �����մϴ�.
template<typename T, int N>
struct array
{
	T buff[N];

	using value_type = T;
	using reference = T&;
	using pointer   = T*;
	using size_type = std::size_t;

	using iterator = T*; // �ݺ��ڸ� Ŭ������ �����ص� ������
						 // �̷��� "raw pointer" �� ����ص� �˴ϴ�.
						// raw pointer �� �ݺ����� ��� Ư¡�� ������
						// �˴ϴ�.

	// STL �����̳ʴ� �ݵ�� begin, end �� �־�� �մϴ�.
	iterator begin() { return ? ; }
	iterator end() { return ? ; }

	int size() const { return N; }
	bool empty() const { return N==0; }
};


int main()
{
	// ����ü �ȿ� �迭�� ������ �Ʒ� ó�� �ʱ�ȭ �����մϴ�.
	array<int, 5> arr = { 1,2,3,4,5 };

	// �޸� ������ "raw array" �� ����������
	// ��� ��� �Լ��� �����Ǿ "raw array" ���� ���մϴ�.
	int n = arr.size();
}
