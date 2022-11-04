#include <iostream>
#include <algorithm>
#include <functional>

int main()
{
    // 핵심 1. C++표준 modulus 함수 객체
    std::modulus<int> m;

    int n = m(10, 3); // 10 % 3 => 1



    int x[5] = { 9, 9,2,4,3};

    // 3의 배수가 아닌 것을 찾고 싶다.! 
    // => % 연산이 필요 하다.
    // => 표준에 있는 modulus 를 사용할수 있을까 ?

//  auto p = std::find_if ( x, x+5, m ); // error
                                        // modulus : 이항 함수객체
                                        // find_if : 단항 함수를 요구

    auto p = std::find_if(x, x + 5, std::bind(m, _1, 3) );

    std::cout << *p << std::endl;

    // 권장
    // 위처럼 modulus 객체를 bind 해서 사용해도 되는데
    // 그냥, 람다 표현식으로 하세요.. <= 권장
}


















//












//
