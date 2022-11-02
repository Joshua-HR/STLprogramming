#include <vector>
#include <algorithm>
#include "show.h"

// C++11 에서, 모든 요소가 스택에 놓이는 새로운 컨테이너를 제공합니다.
struct array
{
	int buff[5];

	int size() const { return 5; }
};

int main()
{
	// 구조체 안에 배열이 있으면 아래 처럼 초기화 가능합니다.
	array arr = { 1,2,3,4,5 };

	int n = arr.size();
}
