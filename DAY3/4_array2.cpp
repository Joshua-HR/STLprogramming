#include <vector>
#include <algorithm>
#include "show.h"

// C++11 ����, ��� ��Ұ� ���ÿ� ���̴� ���ο� �����̳ʸ� �����մϴ�.
struct array
{
	int buff[5];

	int size() const { return 5; }
};

int main()
{
	// ����ü �ȿ� �迭�� ������ �Ʒ� ó�� �ʱ�ȭ �����մϴ�.
	array arr = { 1,2,3,4,5 };

	int n = arr.size();
}
