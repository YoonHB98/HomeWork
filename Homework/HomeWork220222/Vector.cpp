// Vector.cpp : �� ���Ͽ��� 'main' �Լ��� ���Ե˴ϴ�. �ű⼭ ���α׷� ������ ���۵ǰ� ����˴ϴ�.
//

#include <iostream>
#include <vector>
#include <list>
#include <map>
#include "GameVector.h"


GameVector<int> ReturnVector()
{
    GameVector<int> NewArr;

    NewArr.resize(20);

    return NewArr;
}

int main()
{


    {
        GameVectorSort<int> MyVector = GameVectorSort<int>();
       
        //  5 10 10 5 5 5
        MyVector.push_back(5);
        MyVector.push_back(10);
        MyVector.push_back(5);
        MyVector.push_back(1);
        MyVector.push_back(2);
        MyVector.push_back(8);
        MyVector.push_back(99);
       

        MyVector.sortup();

        for (size_t i = 0; i <MyVector.size(); i++)
        {
            std::cout << MyVector[i] << std::endl;
        }
    }

    {
        
        //std::vector<int> Arr;
        //Arr.resize(20);

        //// Arr.reserve(20);

        //GameVector<int> MyVector;
        //MyVector.resize(20);
        //MyVector.reserve(20);


        // unsigned __int64
        
    }

}
