// 7_insert0
// STL 에서 널리 사용하는 기술 

template<typename T> T square(T a)
{
	return a * a;
}

template<typename T> class list
{
public:
	list(int sz, T value) {}
};

// 클래스 템플릿의 객체를  직접 생성하면 템플릿 인자가 복잡해 보일수 있습니다.
// 이 경우는 객체를 만드는 함수 템플릿을 도입하면 코드가 간결해 집니다.
template<typename T> 
list<T> make_list(int sz, T value)
{
	return list<T>(sz, value);
}

int main()
{
	// 다음중 쉬워 보이는 것은 ?
	square<int>(3); // 타입 인자를 전달하는 경우. 정확한 표기법
	square(3);		// 타입 인자 생략시. 컴파일러가 함수 인자로 타입 추론
					// => 쉬워 보인다!!

	// 이제 아래 코드를 생각해 보세요
	list<int> s1(10, 3); // 타입 전달
//	list      s2(10, 3); // 타입 생략. ?? 생성자 인자로 타입추론 ??
						 // C++17 부터 가능합니다.
						 // C++14 까지는 에러!(클래스 템플릿은 타입추론안됨)

	// 아래 코드는 결국 "list<int> s3(10,3)" 과 동일합니다.
	auto s3 = make_list<int>(10, 3);
	auto s4 = make_list(10, 3);		// 장점은
									// 함수 템플릿은 타입인자
									// 생략이 가능하다는 점 입니다.
}


