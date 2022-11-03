#include <iostream>
#include <algorithm>
#include <functional>
using namespace std::placeholders; // _1, _2, _3 ... 을 위해서

// 4항 함수
void foo( int a, int b, int c, int d)
{
    printf("%d, %d, %d, %d\n", a, b, c, d);
}

int main()
{
    foo(1,2,3,4);   // 4항 함수..

    // C++11 std::bind : M 항 함수를 N항 함수로 변경(M > N )
    // => 인자를 고정한 새로운 함수를 생성
    // => 사용법 : std::bind(M항함수, M개인자)
    
    std::bind(foo, 1, 2, 3, 4)();       // 4항 함수 => 0항 함수로 변경
    std::bind(foo, 3, _1, 7, _2)(9, 8); // foo(3, 9, 7, 8) 의 효과
    //|<-----  새로운 함수 ----->|        // 4항 함수 => 2항 함수로 변경   


    std::bind(foo, _3 , _1 , 5 , _2 )(9, 6, 3); // 3, 9, 5, 6 나오게 
                                             // ? 채워 보세요
                                            // 4항 함수 => 3항함수로 변경

}
// 함수형 언어의 "currying" 과 유사한 개념
// 파이썬 : functools.partial 