#include<iostream>
#pragma pack(1)
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;

class SinglyCL
{

    private :
        PNODE first;
        PNODE last;
        int iCount;

    public :
        SinglyCL();

        void Display();
        int Count();

        void InsertFirst(int);
        void InsertLast(int);
        void InsertAtPos(int,int);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int);


};

SinglyCL :: SinglyCL()
{
    this->first = NULL;
    this->last = NULL;
    this->iCount = 0;
}

int SinglyCL :: Count()
{
    return this->iCount;
}

void SinglyCL :: InsertFirst(int iNo)
{

}

void SinglyCL :: InsertLast(int iNo)
{

}

void SinglyCL :: InsertAtPos(int iNo,int iPos)
{
    
}

void SinglyCL :: DeleteFirst()
{

}

void SinglyCL :: DeleteLast()
{

}

void SinglyCL :: DeleteAtPos(int iPos)
{

}


int main()
{

    SinglyCL sobj;



    return 0;

}

