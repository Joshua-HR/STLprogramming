#include <iostream>
#include <algorithm>
#include <functional>

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

    std::bind(foo, 1, 2, 3, 4)();
}
