#include <iostream>
#include <list>
#include <algorithm>
#include "show.h"

// 아래 코드의 transform 의 마지막 인자는 이항 함수 이어야 합니다.
int foo(int a, int b)
{
    return a + b;
}

int main()
{
    std::list<int> s1 = { 1,2,3,4,5};
    std::list<int> s2 = { 6,7,8,9,10,5,6,7,8 };
    std::list<int> s3;

    // transform 알고리즘
    // => 사용법 복잡합니다. 잘 이해해 보세요
    // => 아래 코드를 보고 "foo" 함수의 모양(반환타입, 인자)를 예측해보세요

    // => 아래 코드에서 조건은 "s1의 요소 갯수 <= s2요소 갯수" 이어야 합니다. 
    std::transform(s1.begin(), s1.end(), // 이 구간의 요소를
                   s2.begin(),  // 이 구간의 요소와 함께 foo함수로
                   //s3.begin(),  // foo 함수의 결과를 이 구간에
                   std::back_inserter(s3), 
                   foo);        // 

    show(s3);
	return 0;
}



















//
