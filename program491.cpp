#include <iostream>
using namespace std;

template <class T>
class ArrayX
{
public:
    T *Arr;
    int Size;

    ArrayX(int No);
    void Accepet();
    void Display();
    T Summation();
    ~ArrayX();
};

template <class T>
ArrayX<T>::ArrayX(int No)
{
    Size = No;
    Arr = new T[No];
}

template <class T>
void ArrayX<T>::Accepet()
{
    cout << "Enter the Elements : \n";
    int i = 0;

    for (i = 0; i < Size; i++)
    {
        cin >> Arr[i];
    }
}

template <class T>
void ArrayX<T>::Display()
{
    cout << "Elements Of The array Are : \n";
    int i = 0;

    for (i = 0; i < Size; i++)
    {
        cout << Arr[i] << "\n";
    }
}

template <class T>
T ArrayX<T>::Summation()
{
    T Sum = 0;
    int i = 0;
    for (i = 0; i < Size; i++)
    {
        Sum += Arr[i];
    }

    return Sum;
}

template <class T>
ArrayX<T>::~ArrayX()
{
    delete[] Arr;
}

int main()
{
    ArrayX<int> aobj(5);

    aobj.Accepet();
    aobj.Display();
    cout << "Summation is : " << aobj.Summation();
    return 0;
}