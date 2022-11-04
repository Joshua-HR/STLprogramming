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
		/*
		__asm
		{
			mov eax, x
			add eax, 1
			mov x, eax
		}
		*/

		// intel 명령어에서
		// 멀티코어에 안전한 명령이 있습니다.
		// lock 접두어 : 여러개의 CPU 가 있어도 해당하는 변수는 동시에 접근하지
		//				못하게 하는 명령
		/*
		__asm
		{
			lock inc x
		}
		*/
		// 이런 기술을 lock-free 라고 합니다.
		// lock 이 "없다" 는 것이 아니라
		// => OS의 기능을 사용하는 것이 아니라
		//    CPU 레벨의 명령으로 동기화 하는 것
		
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