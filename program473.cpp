#include<iostream>
using namespace std;

template<class T>
T Addition(T No,T No2)
{
    T Ans;
    Ans = No + No2;
    return Ans;
}

int main()
{
    cout<<Addition(11,10)<<endl;
    cout<<Addition(11.5f,10.2f)<<endl;
    cout<<Addition(11.324,10.242)<<endl;
    return 0;
}