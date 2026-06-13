#include<iostream>
using namespace std;
#pragma pack(1)

class ArrayX
{
    private : 
        int *Arr;
        int iSize;

    public: 

        ArrayX()
        {
            iSize = 5;
            Arr = new int{iSize};
        }

        ArrayX(int x)            
        {
            iSize = x;                              // Characterstics Intialization
            Arr = new int[iSize];                   // Resource Allocation
        }

        ~ArrayX()
        {
            delete []Arr;                           // Resource Deallcation
        }

};


int main()
{

    ArrayX *aobj1 = new ArrayX();           // Deafult Constructor cha call 
    ArrayX *aobj2 = new ArrayX(5);          // Parametrised Constructor

    // Function call

    delete aobj1;
    delete aobj2;
    return 0;
}