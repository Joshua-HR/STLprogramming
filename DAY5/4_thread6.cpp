#include <iostream>
#include <thread>

// atomic

int x = 0;

void foo()
{
	for (int i = 0; i < 1000000; i++)
	{
	//	x = x + 1;

		// 위 한줄은 아래의 3줄로 컴파일 됩니다.
		__asm
		{
			mov eax, x
			add eax, 1
			mov x, eax
		}
	}
}
int main()
{
	std::thread t1(&foo);
	std::thread t2(&foo);
	std::thread t3(&foo);
	t1.join();
	t2.join();
	t3.join();

	std::cout << x << std::endl;
}