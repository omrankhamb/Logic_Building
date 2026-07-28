#include<iostream>
using namespace std;

class ArrayX
{   
    public :
        int *Arr;
        int Size;
    
    ArrayX(int No)
    {
        Size = No;
        Arr = new int[No];
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
    

    ~ArrayX()
    {
        delete []Arr;
    }

};

int main()
{
    ArrayX aobj(5);

    aobj.Accepet();
    aobj.Display();
    return 0;
}