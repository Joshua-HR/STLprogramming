#include <iostream>
#include <list>
#include <algorithm>
#include "show.h"


int main()
{
    std::list<int> s1 = { 1,2,3,4,5};
    std::list<int> s2 = { 6,7,8,9,10 };
    std::list<int> s3;

    // transform 알고리즘
    // => 사용법 복잡합니다. 잘 이해해 보세요

    std::transform(s1.begin(), s1.end(), // 이 구간의 요소를
                   s2.begin(),  // 이 구간의 요소와 함께 foo함수로
                   s3.begin(),  // foo 함수의 결과를 이 구간에
                   foo);        // 

	return 0;
}



















//
