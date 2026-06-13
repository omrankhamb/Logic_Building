#include<iostream>
using namespace std;

class ArrayX
{
    public : 
        int *Arr;
        int iSize;




};


int main()
{
    ArrayX aobj;

    cout<<sizeof(aobj); // Size is : 16

    return 0;
}