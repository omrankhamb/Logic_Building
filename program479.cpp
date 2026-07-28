#include<iostream>
using namespace std;

template<class T>
T Maximum(T No1,T No2)
{
    T Ans;
    if(No1 > No2)
    {
        Ans = No1;
    }
    else
    {
        Ans = No2;
    }

    return Ans;
}

int main()
{
    cout<<Maximum(21.23f,11.12f)<<endl;
    cout<<Maximum(21.2,11.12)<<endl;
    cout<<Maximum(21,11)<<endl;
    return 0;
}