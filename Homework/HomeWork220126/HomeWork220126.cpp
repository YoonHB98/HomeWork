// HomeWork220126.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
class Myint
{
public:
    int Value;
public:
    Myint& operator+(const Myint& _Other)
    {
        this->Value + _Other.Value;
        return *this;
    }
    Myint& operator=(const Myint& _Other)
    {
        Value = _Other.Value;
        return *this;
    }
    Myint& operator ++()
    {
        this->Value = this->Value + 1 ;
        return *this;
    }

    Myint operator ++(int)
    {
        Myint i = *this;
        Myint tempValue = *this;
        this->Value = this->Value + 1;
        return tempValue;
    }
    Myint& operator --()
    {
        this->Value = this->Value - 1;
        return *this;
    }

    Myint operator --(int)
    {
        Myint i = *this;
        Myint tempValue = *this;
        this->Value = this->Value - 1;
        return tempValue;
    }

    
public:
    Myint(int _Value)
        : Value(_Value)
    {

    }
};



int main()
{

    Myint MyValue = 0;
    Myint MyResult = 0;
    Myint MyResult1 = 0;
    Myint MinusValue = 0;
    Myint MinusResult = 0;
    MyResult1 = MyValue++; //MyResult1 = MyValue 이후 MyValue를 1 증가시킴
    MyResult = ++MyValue; //MyResult = MyValue + 1
    MinusResult = MinusValue--;
    MinusResult = --MinusValue;
    
    printf_s("%d \n", MyResult1);
    printf_s("%d", MyResult);
    int a = 0;
}