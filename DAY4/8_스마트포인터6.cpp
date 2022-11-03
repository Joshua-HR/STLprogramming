#include <iostream>
#include <memory>

// 삭제자 변경

void foo(void* p) { free(p); }

int main()
{
	// 핵심 1. make_shared 를 사용하면 항상 new 로 자원을 생성합니다.
	std::shared_ptr<int> sp1 = std::make_shared<int>(0);	
								// => 0 은 new int(0) 즉, 초기값


	// 핵심 2. new 이외의 방법으로 자원을 할당하려면 직접 할당하면 됩니다.
//	std::shared_ptr<int> sp2( malloc(40) ); 
					// => 버그, sp2의 소멸자가 delete 하게 됩니다.

	std::shared_ptr<int> sp2(static_cast<int*>(malloc(40)), foo );
	std::shared_ptr<int> sp3(static_cast<int*>(malloc(40)), free);
					// => ok. 생성자 2번째 인자로 삭제하는 방법 전달
					// => 람다표현식으로 전달해도 됩니다.

	// 핵심 3. 배열 형태로 할당
//	std::shared_ptr<int> sp4(new int[10]);
					// => 버그, 소멸자에서 delete[] 가 아닌 delete

	std::shared_ptr<int> sp4(new int[10], [](int* p) { delete[] p; });
					// => ok..

	std::shared_ptr<int[]> sp5(new int[10]); // ok.. 단, C++17 부터

	// 참고, new int[10] 이 필요하고, 자동삭제를 원하면!!!
	// 스마트 포인터 보다 vector 를 먼저 고려해라.
//	std::vector<int> v(10);
}







