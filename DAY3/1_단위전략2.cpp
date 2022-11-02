#include <vector>

// vector 의 resize 의 구현시 메모리 할당에 대해서 생각해 봅시다.
template<typename T, typename Alloc = std::allocator<T> > 
class vector
{
	T* buff;
	Alloc ax;	// 메모리 할당기 객체
				// vector 의 모든 멤버 함수 에서 메모리 할당이 필요하면
				// 이 "ax" 객체를 사용한다.
public:
	void resize(int sz)
	{
		// 메모리 할당이 필요한 경우 어떻게 할까요 ?
		// new ? malloc ? memory pool
//		buff = new T[sz];	// 이렇게 코딩했다면
							// 사용자가 메모리 할당 방식을 변경할수
							// 없습니다.

		buff = ax.allocate(sz); // 메모리 할당기 객체를 사용해서 메모리 할당

		// 해지가 필요한 경우에도 할당기의 멤버 함수로 해지
		ax.deallocate(buff, sz);
	}
};


int main()
{
	std::vector<int> v(5);
	v.resize(10);
}


