#include <vector>
#include <iostream>
#include <algorithm>
#include "show.h"
// 과거에 만들어 놓은 함수가 있다고 생각해 봅시다.

void foo(int* arr, int sz) {}

int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };
	foo(x, 10);

	// 배열은 크기변경이 안되어서 불편합니다.
	// vector 가 편리합니다.

	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	// foo 에 v를 보내 보세요.
//	foo(&v , v.size()); // error. v의 주소가 아닌
						// v 가 사용하는 버퍼의 주소를 보내 야 합니다.
	
	foo(&v[0],    v.size()); // ok.. C++11 이전에 사용하던 코드
	foo(v.data(), v.size()); // ok.. C++11 이후..
}


