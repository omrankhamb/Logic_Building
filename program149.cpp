#include<iostream>
using namespace std;

int main()
{
    int *Brr = NULL;
    int iLength = 0,iCnt = 0;

    cout<<"Emter the Number of element : ";
    cin>>iLength;

    // C    : Brr = (int*)malloc(sizeof(int) * iLength);
    // Java : Brr = new int[iLength];
    Brr = new int[iLength];

    cout<<"Enter the elements : "<<"\n";

    for(iCnt = 0 ; iCnt < iLength ; iCnt ++)
    {
        cin>>Brr[iCnt];
    }

    cout<<"Elements of the array are : "<<"\n";
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        cout<<Brr[iCnt]<<"\n";
    }

    delete []Brr;

    return 0;
}

