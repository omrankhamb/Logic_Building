#include<iostream>
using namespace std;


void Display(double *Arr,int Size)
{
    int i = 0;
    for(i = 0 ; i < 5 ; i++)
    {
        cout<<Arr[i]<<" ";
    }
}

double Summation(double *Arr,int Size)
{
    double sum;
    int i = 0;

    for(i = 0 ; i < 5 ; i++)
    {
        sum += Arr[i];
    }
    return  sum;
}

int main()
{
    double Brr[] = {10.2,20.2,30.2,40.2,50.2};

    Display(Brr,5);
    cout<<endl;
    cout<<Summation(Brr,5);
    return 0;
}