#include <iostream>
#include <algorithm> 

// 137page 아래부분


// Sort 알고리즘은 "변하지 않지만"
// 어떤 기준으로 Sort 할지 "정책"은 변경가능한 것이 좋다.

// 요소를 비교하는 방식을 사용자가 변경할수 있게 하자.

void Sort(int* x, int sz, bool(*cmp)(int, int) )
{
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = i + 1; j < sz; j++)
		{
//			if (x[i] > x[j])  

			if ( cmp( x[i], x[j] ) == true )
				std::swap(x[i], x[j]);
		}
	}
}
//------------------------------------------------
// Sort 에 전달할 비교함수들
bool cmp1(int a, int b) { return a > b; }
bool cmp2(int a, int b) { return a < b; }

int main()
{
	int x[10] = { 1,3,5,7,9,2,4,6,8,10 };
	Sort(x, 10, cmp1); // 오름 차순
	Sort(x, 10, cmp2); // 내림 차순
}

