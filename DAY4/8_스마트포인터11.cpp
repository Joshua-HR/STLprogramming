#include <iostream>
#include <thread>
#include <memory>

// enable_shared_from_this 로 부터 상속 받으면
// 1. 외부에서 만들어 놓은 shared_ptr 객체가 사용하는 관리객체를
// 2. shared_from_this() 함수로 공유 할수 있습니다.

class Machine : public std::enable_shared_from_this<Machine>
{
	int data;
	std::shared_ptr<Machine> holdme; // 자신의 참조계수를 증가하기 위해 만든
									//  멤버 데이타
public:
	~Machine() { std::cout << "~Machine" << std::endl; }

	void run( )
	{
//		holdme = this;  // error. 이고.	
						// 에러가 아니라도, 별도의 관리객체가 생성됩니다. 잘못된 코드

		holdme = shared_from_this();	// main 함수에 있는
										// sp 가 만든 관리객체를 공유합니다.
		// 스레드로 start 실행
		std::thread t(&Machine::start, this); 
		t.detach();
	}

	void start()
	{
		data = 10;

		std::cout << "finish start" << std::endl;
		holdme.reset(); // Machine 파괴. 소멸자 호출
	}
};

int main()
{
	{
		std::shared_ptr<Machine> sp = std::make_shared<Machine>();
		sp->run( );
	}
	int n;
	std::cin >> n; // 종료 방지
}


/*
int* p = new int;

std::shared_ptr<int> sp1(p);
//std::shared_ptr<int> sp2(p); // sp1과는 다른 관리객체!
std::shared_ptr<int> sp2(sp1); // 이렇게 해야 sp1과 관리 객체 공유
*/