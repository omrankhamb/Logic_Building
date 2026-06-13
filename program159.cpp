#include<iostream>
using namespace std;
#pragma pack(1)

class ArrayX
{
    public : 
        int *Arr;
        int iSize;

        // Parametrised Constructor
        ArrayX(int x)            
        {
            cout<<"Inside Constructor"<<endl;
            iSize = x;                              // Characterstics Intialization
            Arr = new int[iSize];                   // Resource Allocation
        }

        // Destructor
        ~ArrayX()
        {
            cout<<"Inside Destructor"<<endl;
            delete []Arr;                           // Resource Deallcation
        }

};


int main()
{

    // Static Memory Allocation memory of object
    // ArrayX aobj1(5);

    ArrayX *aobj = new ArrayX(5);   //pointer aobj auto storage class

    return 0;
}