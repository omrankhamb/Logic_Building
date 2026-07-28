#include<iostream>
using namespace std;

template<class T>
T Maximum(T No1,T No2,T No3)
{
    
    if(No1 > No2 && No1 > No3)
    {
        return No1;
    }
    else if(No2 > No1 && No2 > No3)
    {
        return No2;
    }
    else
    {
        return No3;
    }
    
  
}

int main()
{
    cout<<Maximum(21.23f,11.12f,243.f)<<endl;
    cout<<Maximum(21.2,11.12,345.32)<<endl;
    cout<<Maximum(21,11,223)<<endl;
    return 0;
}