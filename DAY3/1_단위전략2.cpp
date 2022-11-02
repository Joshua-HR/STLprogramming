#include <vector>

// vector �� resize �� ������ �޸� �Ҵ翡 ���ؼ� ������ ���ô�.
template<typename T, typename Alloc = std::allocator<T> > 
class vector
{
	T* buff;
	Alloc ax;	// �޸� �Ҵ�� ��ü
				// vector �� ��� ��� �Լ� ���� �޸� �Ҵ��� �ʿ��ϸ�
				// �� "ax" ��ü�� ����Ѵ�.
public:
	void resize(int sz)
	{
		// �޸� �Ҵ��� �ʿ��� ��� ��� �ұ�� ?
		// new ? malloc ? memory pool
//		buff = new T[sz];	// �̷��� �ڵ��ߴٸ�
							// ����ڰ� �޸� �Ҵ� ����� �����Ҽ�
							// �����ϴ�.

		buff = ax.allocate(sz); // �޸� �Ҵ�� ��ü�� ����ؼ� �޸� �Ҵ�

		// ������ �ʿ��� ��쿡�� �Ҵ���� ��� �Լ��� ����
		ax.deallocate(buff, sz);
	}
};


int main()
{
	std::vector<int> v(5);
	v.resize(10);
}


