#include <iostream>

int length(const char* _Ptr)
{
	int Count = 0;
	while (0 != _Ptr[Count])
	{
		Count += 1;
	}
	return Count;
}
void Rervers(const char* _Sorce, char* _Result, int length)
{
	int i = 0;
	while (_Sorce[i] != 0)
	{
		_Result[i] = _Sorce[i];
		i += 1;
	}
	i = 0;
	while (length != 0)
	{
		_Result[i ] = _Sorce[length -1];
		length -= 1;
		i += 1;

	}
	
	return;

}

int main()
{
	{
		char Text[100] = {0, };
		char msg[100] = "aaaBCD";
		
		int Value = length(msg);
 		Rervers(msg, Text, Value);
		printf_s(Text);
	}
}

