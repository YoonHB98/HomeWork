#include <iostream>
void ToUpper(const char* _Left, char* _Right)
{

	int i = 0;
	while (_Left[i] != 0)
	{
		if (_Left[i] >= 97)//소문자면
		{
			_Right[i] = _Left[i] - 32;
			i += 1;

		}
		else//그 외에
		{
			_Right[i] = _Left[i];
			i += 1;

		}
		

	}
	return;
}

int main()
{
	{
		char Text[100] = {0, };

		ToUpper("12aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPQqRrsStTuUvVwWxXyYzZ", Text);
		
		printf_s(Text); 
	}
}
