#include<iostream>
using namespace std;


void Display(int *Arr,int Size)
{
    int i = 0;
    for(i = 0 ; i < 5 ; i++)
    {
        cout<<Arr[i]<<" ";
    }
}

int main()
{
    int Brr[] = {10,20,30,40,50};

    Display(Brr,5);
    return 0;
}