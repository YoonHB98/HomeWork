#include <iostream>

void StringTrimRemove(const char* _Left, char* _Right)
{
    
    int i = 0;
    int Left = 0;
    int Right = 0;
    while (i < 10000)
    {    
        
        if (_Left[Left] != ' ')
        {
            _Right[Right] = _Left[Left];
          
           Left += 1;
           Right += 1;
        }
        else
        {
            Left += 1;
        }
        i += 1;
    }
    
    return;
}

int main()
{
    char Text[10000] = { 0,};
    StringTrimRemove("a d    dd dd cc  g yu", Text);
    // "aaabbbcccddd"
    printf_s(Text);
}

