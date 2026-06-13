#include<iostream>
using namespace std;
#pragma pack(1)

class ArrayX
{
    public : 
        int *Arr;
        int iSize;

        ArrayX(int x)            
        {
            iSize = x;                              // Characterstics Intialization
            Arr = new int[iSize];                   // Resource Allocation
        }

        ~ArrayX()
        {
            cout<<"Inside Destructor"<<endl;
            delete []Arr;                           // Resource Deallcation
        }

};


int main()
{

    ArrayX *aobj1 = new ArrayX(5);  

    // Logic(Function call)
    cout<<(aobj1->iSize)<<endl;
    
    aobj1->iSize = 0;   // Issue

    aobj1->Arr = NULL;  // Issue

    delete(aobj1);
    return 0;
}