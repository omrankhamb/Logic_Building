#include<iostream>
using namespace std;


template<class T>
class ArrayX
{   
    public :
        T *Arr;
        int Size;
    
    ArrayX(int No)
    {
        Size = No;
        Arr = new T[No];
    }

    void Accepet()
    {
        cout<<"Enter the Elements : \n";
        int i = 0;

        for(i = 0 ; i < Size ; i++)
        {
            cin>>Arr[i];
        }
    }

    void Display()
    {
        cout<<"Elements Of The array Are : \n";
        int i = 0;

        for(i = 0 ; i < Size ; i++)
        {
            cout<<Arr[i]<<"\n";
        }
    }

    T Summation()
    {
        T Sum = 0;
        int i =  0;
        for(i = 0 ; i < Size ; i++)
        {
            Sum += Arr[i];
        }

        return Sum;
    }
    

    ~ArrayX()
    {
        delete []Arr;
    }

};

int main()
{
    ArrayX <float>aobj(5);

    aobj.Accepet();
    aobj.Display();
    cout<<"Summation is : "<<aobj.Summation();
    return 0;
}