#include<iostream>
using namespace std;
#pragma pack(1)

class ArrayX
{
    public : 
        int *Arr;
        int iSize;

        // Default Constructor
        ArrayX()            
        {

        }

        // Parametrised Constructor
        ArrayX(int x)            
        {
        
        }


};


int main()
{
    ArrayX aobj1;           // call default constructor      
    ArrayX aobj2(5);        // call parametrised constructor


    return 0;
}