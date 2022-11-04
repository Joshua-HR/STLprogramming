#include <iostream>
#include <ratio>

// chrono 라이브러리
// => 시간관련 타입을 제공하는 라이브러리
// => C++11 에서 추가.

// std::ratio : 분수를 나타내는 타입
// 핵심 : 각 분수를 다른 타입이다.

int main()
{
	std::ratio<1, 10> r1; // 1/10  타입의 객체
	std::ratio<2, 10> r2; // 2/10 => 1/5

	// 위 코드에서 r1, r2 는 다른 타입입니다.

	// 만약 분수를 다루는 클래스를 아래처럼 만들 었다면
	// => r3, r4 는 같은 타입입니다.
	// => chrono 에서는 모든 분수값을 다른 타입화 하고 싶었습니다!
	Ratio r3(1, 10); // 1/10 객체
	Ratio r4(1, 5); // 1/5 객체
}




namespace std {

	//class template ratio
	template <intmax_t N, intmax_t D = 1>
	class ratio {
	public:
		typedef ratio<num, den> type;
		static constexpr intmax_t num;
		static constexpr intmax_t den;
	};


	// ratio arithmetic            
	template <class R1, class   R2> using   ratio_add = /*ratio*/;
	template <class R1, class   R2> using   ratio_subtract = /*ratio*/;
	template <class R1, class   R2> using   ratio_multiply = /*ratio*/;
	template <class R1, class   R2> using   ratio_divide = /*ratio*/;

	// ratio comparison            
	template <class R1, class R2> struct ratio_equal;
	template <class R1, class R2> struct ratio_not_equal;
	template <class R1, class R2> struct ratio_less;
	template <class R1, class R2> struct ratio_less_equal;
	template <class R1, class R2> struct ratio_greater;
	template <class R1, class R2> struct ratio_greater_equal;

	// convenience SI typedefs         
	typedef ratio<1, 1000000000000000000000000> yocto;
	typedef ratio<1, 1000000000000000000000> zepto;
	typedef ratio<1, 1000000000000000000> atto;
	typedef ratio<1, 1000000000000000> femto;
	typedef ratio<1, 1000000000000> pico;
	typedef ratio<1, 1000000000> nano;
	typedef ratio<1, 1000000> micro;
	typedef ratio<1, 1000> milli;
	typedef ratio<1, 100> centi;
	typedef ratio<1, 10> deci;
	typedef ratio<10, 1> deca;
	typedef ratio<100, 1> hecto;
	typedef ratio<1000, 1> kilo;
	typedef ratio<1000000, 1> mega;
	typedef ratio<1000000000, 1> giga;
	typedef ratio<1000000000000, 1> tera;
	typedef ratio<1000000000000000, 1> peta;
	typedef ratio<1000000000000000000, 1> exa;
	typedef ratio<1000000000000000000000, 1> zetta;
	typedef ratio<1000000000000000000000000, 1> yotta;

}
