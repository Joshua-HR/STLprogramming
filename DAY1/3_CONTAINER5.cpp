#include <iostream>

// STL : Standard Template Library

// Container : list, vector 같은 자료구조를 클래스로 만든것
#include <vector>
#include <list>
#include <string>

// 우리가 만든 find 같은 일반 함수를 알고리즘 이라고 합니다.
#include <algorithm> // 대부분 이헤더에 있습니다.

int main()
{
	std::vector<int> c = { 1,2,3,4,5,6,7,8,9,10 }; 

	// 뒤집는 알고리즘은 std::reverse 입니다. 뒤집어 보세요
	// ??

	for (int e : c)
		std::cout << e << std::endl;
}
