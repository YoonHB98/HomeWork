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
    for ( i = _Start; i <= LeftStringCount; i += 1)
    {
        if (_Text[i] == _FindStr[_FindStrValue])
        {
            _FindStrValue += 1;
        }
        else
        {
            _FindStrValue = 0;
        }
        if (_FindStrValue == RightStringCount)
        {
            int _Value = i - RightStringCount + 2;
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
    _End = LeftStringCount;
    int _FindStrValue = 0;
    for (i = _End; i >= 0; i -= 1)
    {
        int a = ( LeftStringCount - i);
        if (_Text[i] == _FindStr[_FindStrValue])
        {
            _FindStrValue += 1;
        }
        else
        {
            _FindStrValue = 0;
        }
        if (_FindStrValue == RightStringCount)
        {
            int Value =  a - (RightStringCount - 1);
            return Value;
        }
    }
    return -1;
}



int main()
{
    // 실패
    {
        int Count = CountFirst("aaaa 1 2eeeee", 0, "eeeee");

        int a = 0;
    }
    
    {
        int Count = CountLast("aaa  eee asdfasd 1111", 0, "eee");

        int a = 0;
    }



}