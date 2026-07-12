#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node * PNODE;

#pragma pack(1)
class DoublyCL
{
    private :
        PNODE first;
        PNODE last;
        int iCount;

    public :
        DoublyCL();

        void Display();
        int Count();

        void InsertFirst(int);
        void InsertLast(int);
        void InsertAtPos(int,int);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int);
        
};


DoublyCL:: DoublyCL()
{
    cout<<"Inside constructor\n";
    first = NULL;
    last = NULL;
    iCount = 0;
}

void DoublyCL:: Display()
{}

int DoublyCL:: Count()
{}

void DoublyCL:: InsertFirst(int iNo)
{}

void DoublyCL:: InsertLast(int iNo)
{}

void DoublyCL:: InsertAtPos(int iNo,int iPos)
{}

void DoublyCL:: DeleteFirst()
{}

void DoublyCL:: DeleteLast()
{}

void DoublyCL:: DeleteAtPos(int iPos)
{}



int main()
{

    DoublyCL dobj;
    cout<<sizeof(dobj);
    return 0;
}
