#include<iostream>
using namespace std;

double AdditionD(double No,double No2)
{
    double Ans;
    Ans = No + No2;
    return Ans;
}

float AdditionF(float No,float No2)
{
    float Ans;
    Ans = No + No2;
    return Ans;
}


int AdditionI(int No,int No2)
{
    int Ans;
    Ans = No + No2;
    return Ans;
}

int main()
{
    cout<<AdditionI(11,10)<<endl;
    cout<<AdditionF(11.5f,10.2f)<<endl;
    cout<<AdditionD(11.324,10.242)<<endl;
    return 0;
}