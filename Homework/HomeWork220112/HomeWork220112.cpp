#include <iostream>

int main()
{
	

	{
		int Arr[10] = { 0, };
		int Index = 0;
		while (Index < 10) //짝수
		{
			
			Arr[Index] = Index * 2 + 2; //Index에 2를 곱하고 거기에2를 더함(0번이 2가 됨)
			Index += 1; // Index 1 증가
			
		}
	}

	{
		int Arr[10] = { 0, };
		int Index = 0;
		while (Index < 10) //홀수
		{
			
			Arr[Index] = Index * 2 + 1; // Index에 2를 곱하고 거기에 1을 더함(0번이 1이 됨)
			Index += 1; // Index 1 증가
			
		}

		int a = 0;
	}

}
