#include <iostream>
#include <vector>
#include <algorithm>
#include "show.h"
using namespace std;

// 핵심 : STL 의 알고리즘의 인자로 "함수"를 전달하는 경우가 많습니다.

// 단항 함수 : 인자가 한개인 함수
// 이항 함수 : 인자가 두개인 함수

void foo(int n)
{
    std::cout << n << ", ";
}

int main()
{
    std::vector<int> v = {1,2,3,4,5,6,7,8,9,10};
    
    // for_each 알고리즘
    std::for_each(v.begin(), v.end(), foo);


	return 0;
}



















//
