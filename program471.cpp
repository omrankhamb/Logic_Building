#include<iostream>
using namespace std;

double Addition(double No,double No2)
{
    double Ans;
    Ans = No + No2;
    return Ans;
}

int main()
{
    double Value = 10.5;
    double Value2 = 11.42;
    double Ret  = 0.0;  // withiut f d=doublde

    Ret = Addition(Value,Value2);
    cout<<"Addition is : "<<Ret<<endl;

    
    return 0;
}