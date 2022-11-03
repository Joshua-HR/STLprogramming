#include <iostream>

template<typename T>
class Ptr
{
	T* obj;
	
	int* ref;

public:
	Ptr(T* p = nullptr) : obj(p) 
	{
		ref = new int;
		*ref = 1;	
	}

	// 참조계수용 복사 생성자
	Ptr(const Ptr& p)
		: obj(p.obj), ref(p.ref)
	{
		++(*ref);
	}
	~Ptr() 
	{
		if (--(*ref) == 0)
		{
			delete ref;
			delete obj;
		}
	}



	T* operator->() { return obj; }
	T& operator*() { return *obj; }
};



int main()
{
	Ptr<int> p1 = new int;
	*p1 = 10;
	std::cout << *p1 << std::endl;

	Ptr<int> p2 = p1; // runtime error
}


