#include <iostream>
#include <list>
#include <algorithm>

// 삽입 반복자는 "어떻게 동작하나요 ? 구현원리가 뭔가요 ?"

template<typename T>
class myback_insert_iterator
{
	T& container; // 컨테이너의 참조를 보관
public:
	myback_insert_iterator(T& c) : container(c) {}

	myback_insert_iterator& operator*()
	{
		return *this;
	}

	myback_insert_iterator& operator=(typename T::value_type value)
	{
		container.push_back(value); // 결국 이코드 때문에 끝에 추가됩니다.
								// 결국은 "컨테이너.push_back()" 으로
								// 추가 하는 원리.
		return *this;
	}
};

int main()
{
	std::list<int> s = { 1,2 };

	myback_insert_iterator< std::list<int> > p(s);
					// s의 끝에 추가하는 반복자

	*p = 30; // ( p.operator*() ).operator=(30)
			// s.push_back(3)
	for (auto& n : s)
		std::cout << n << ", "; // 1, 2, 30
}
