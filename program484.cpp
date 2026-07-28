#include<iostream>
using namespace std;

template<class T>
void Display(T *Arr,int Size)
{
    int i = 0;
    for(i = 0 ; i < 5 ; i++)
    {
        cout<<Arr[i]<<" ";
    }
}

template<class T>
T Summation(T *Arr,int Size)
{
    T sum = 0;
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
    int Crr[] = {10,20,30,40,50};

    Display(Brr,5);
    cout<<endl;
    cout<<Summation(Brr,5);

    cout<<endl;
    cout<<endl;
    Display(Crr,5);
    cout<<endl;
    cout<<Summation(Crr,5);
    return 0;
}