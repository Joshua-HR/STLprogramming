// godbolt.org 에 접속해 보세요
 
int a = 0;
int b = 0;

// foo, goo 는 다른 스레드가 실행합니다.
void foo()
{
	a = b + 1;

	std::atomic_thread_fence(); // 이 위의 명령은
								// 이 펜스 아래로 내려 올수 없다.
								// 명령어의 재배치를 막는 함수.

	b = 1;
}









void goo()
{
	if (b == 1)
	{
		// a는 반드시 1일까요 ?
	}
}

int main()
{
}


