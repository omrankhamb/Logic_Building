#include<iostream>
using namespace std;

float Addition(float No,float No2)
{
    float Ans;
    Ans = No + No2;
    return Ans;
}

int main()
{
    float Value = 10.5f;
    float Value2 = 11.42f;
    float Ret  = 0.0f;  // withiut f d=doublde

    Ret = Addition(Value,Value2);
    cout<<"Addition is : "<<Ret<<endl;

    
    return 0;
}