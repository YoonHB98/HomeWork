#include <iostream>
int StringCount(const char* _Left)
{
    int Count = 0;
    while (0 != _Left[Count])
    {
        Count += 1;
    }

    return Count;
}

int CountFirst(const char* _Text, int _Start, const char* _FindStr)
{
    int LeftStringCount = StringCount(_Text);
    int RightStringCount = StringCount(_FindStr);
    int i = 0;
    int _FindStrValue = 0;
    int Count = 0;
    for ( i = _Start; i <= LeftStringCount; i += 1)
    {
        if (_Text[i] == _FindStr[_FindStrValue])
        {
            _FindStrValue += 1;
            Count += 1;
        }
        else
        {
            _FindStrValue = 0;
            Count += 1;
        }
        if (_FindStrValue == RightStringCount)
        {
            int _Value = Count - RightStringCount + 1;
            return _Value;
        }
    }
    return -1;
}

int CountLast(const char* _Text, int _End, const char* _FindStr)
{
    int LeftStringCount = StringCount(_Text);
    int RightStringCount = StringCount(_FindStr);
    int i = 0;
    
    int _FindStrValue = 0;
    int Count = 0;
    for (i = LeftStringCount - _End; i >= 0; i -= 1)
    {
        int a = ( LeftStringCount - i);
        if (_Text[i] == _FindStr[_FindStrValue])
        {
            _FindStrValue += 1;
            Count += 1;
        }
        else
        {
            _FindStrValue = 0;
            Count += 1;
        }
        if (_FindStrValue == RightStringCount)
        {
            int Value = Count - RightStringCount;
            return Value;
        }
    }
    return -1;
}



int main()
{
    // 실패
    {
        int Count = CountFirst("aaaa 1 2  eeeee", 4, "eeeee");

        int a = 0;
    }
    
    {
        int Count = CountLast("aaa  eeee asdfasd 1111", 8, "eeee");

        int a = 0;
    }



}