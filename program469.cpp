#include<iostream>
using namespace std;

int Addition(int No,int No2)
{
    int Ans;
    Ans = No + No2;
    return Ans;
}

int main()
{
    int Value = 10;
    int Value2 = 11;
    int Ret  = 0;

    Ret = Addition(Value,Value2);
    cout<<"Addition is : "<<Ret<<endl;

    
    return 0;
}