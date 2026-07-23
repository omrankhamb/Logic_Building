#include <iostream>
using namespace std;

class Searching
{
private:
    int *Arr;
    int iSize;

public:
    Searching(int iNo);
    ~Searching();

    void Accepet();
    void Display();

    bool LinearSearch(int);
    bool Bidirectional(int);
};

Searching ::Searching(int iNo)
{
    iSize = iNo;
    Arr = new int[iSize];
}

Searching ::~Searching()
{
    delete[] Arr;
}

void Searching ::Accepet()
{
    cout << "Enter the Elements" << endl;

    int i = 0;
    for (i = 0; i < iSize; i++)
    {
        cin >> Arr[i];
    }
}

void Searching ::Display()
{
    cout << "elements of Array Are : " << endl;
    int i = 0;
    for (int i = 0; i < iSize; i++)
    {
        cout << Arr[i] << "  ";
    }
}

bool Searching ::LinearSearch(int iNo)
{
    bool bFlag = false;
    int i = 0;

    for (int i = 0; i < iSize; i++)
    {
        if (Arr[i] == iNo)
        {
            bFlag = true;
            break;
        }
    }

    return bFlag;
}

bool Searching ::Bidirectional(int iNo)
{
    bool bflag = false;

    int iStart = 0, iEnd = 0;

    iStart = 0;
    iEnd = iSize - 1;

    while (iStart <= iEnd) //  Wrong Condition misddle elmet issue
    {
        if (Arr[iStart] == iNo || Arr[iEnd] == iNo)
        {
            bflag = true;
            break;
        }
        iStart++;
        iEnd--;
    }

    return bflag;
}

int main()
{
    Searching sobj(5);

    sobj.Accepet();
    sobj.Display();

    if (sobj.LinearSearch(6))
    {
        printf("Element is present");
    }
    else
    {
        printf("Element is not present");
    }

    if (sobj.Bidirectional(6))
    {
        printf("Element is present");
    }
    else
    {
        printf("Element is not present");
    }

    return 0;
}