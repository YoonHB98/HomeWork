// GameArray.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <assert.h>
#include <crtdbg.h>

using DataType = int;

// 
class GameArray
{
private:
    int Size_;
    DataType* ArrData_;

public:
    int GetSize()
    {
        return Size_;
    }
    GameArray()
    {

    }
    DataType& operator[](int _Index)
    {
        if (Size_ <= _Index)
        {
            assert(false);
        }

        return ArrData_[_Index];
    }

    inline void operator=(const GameArray& _Other)
    {
        ReSize(_Other.Size_);

        // 이걸 쉘로우 카피 
        // 혹은 얕은 복사라고 한다.
        //this->ArrData_ = _Other.ArrData_;
        //this->Size_ = _Other.Size_;

        // 이걸 딥 카피
        // 혹은 깊은 복사라고 한다.
        for (size_t i = 0; i < this->Size_; i++)
        {
            this->ArrData_[i] = _Other.ArrData_[i];
        }

        return;
    }

    inline void AllValueSetting(const DataType& Data)
    {
        for (size_t i = 0; i < this->Size_; i++)
        {
            this->ArrData_[i] = Data;
        }
    }


    inline void Release()
    {
        if (nullptr != ArrData_)
        {
            delete[] ArrData_;
            ArrData_ = nullptr;
        }
    }

    void ReSize(unsigned int _Size)
    {
        int Before = Size_;
        int After = _Size;
        //GameArray Copy = GameArray();
        //Copy.ArrData_ = new DataType[Size_];
        //for (size_t i = 0; i < Size_; i++)
        //{
        //    Copy.ArrData_[i] = i;//여기서 NewArray값 1~ 로 정해짐
        //}

        int* PrevValue = ArrData_;
        ArrData_ = new int[After];
       Release();
       Size_ = _Size;
       ArrData_ = new DataType[_Size];

       if (Before > After)
       {
           for (size_t i = 0; i < After; i++)
           {
               this->ArrData_[i] = PrevValue[i];
           }
           return;
       }
       if ( After > Before)
       {
           for (size_t i = 0; i < Before; i++)
           {
               this->ArrData_[i] = PrevValue[i];
           }
           //for (size_t i = Before; i < After; i++)
           //{
           //    this->ArrData_[i] = Copy.ArrData_[i];
           //}
           //return;
       }

       if (nullptr != PrevValue)
       { 
           delete PrevValue;
           PrevValue = nullptr;

       }


       
    }


public:
    GameArray(unsigned int _Size)
        : ArrData_(nullptr)
        , Size_(0)
    {
        ReSize(_Size);
    }

    ~GameArray()
    {
        Release();
    }
};

int main()
{


    GameArray NewArray = GameArray(4);
    
    GameArray NewArray2 = GameArray(3);

    int Size = sizeof(GameArray);

    for (size_t i = 0; i < NewArray.GetSize(); i++)
    {
        NewArray[i] = i;//여기서 NewArray값 1~ 로 정해짐
    }

   

    NewArray2 = NewArray;

    NewArray2.ReSize(5);

    for (size_t i = 0; i < NewArray2.GetSize(); i++)
    {
        std::cout << NewArray2[i] << std::endl;
    }


    std::cout << "Hello World!\n";
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
