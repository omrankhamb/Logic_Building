#include<iostream>
using namespace std;
#pragma pack(1)

class ArrayX
{
    private : 
        int *Arr;
        int iSize;

    public: 
        // Default Argumentx    
        ArrayX(int x = 5)                           // Deafult + Parametrised Constructor = Parametrised Consrtuctor with default Value           
        {
            iSize = x;                              // Characterstics Intialization
            Arr = new int[iSize];                   // Resource Allocation
        }

        ~ArrayX()
        {
            delete []Arr;                           // Resource Deallocation
        }

};


int main()
{

    ArrayX *aobj1 = new ArrayX();                   // Parametrised Consrtuctor 
    ArrayX *aobj2 = new ArrayX(15);                  // Parametrised Consrtuctor 

    // Function call


    delete aobj1;
    delete aobj2;

    return 0;
}