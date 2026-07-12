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


void SinglyCL :: Display()
{
    if((this->first == NULL) && (this->last == NULL))
    {
        return;
    }

    PNODE temp = NULL;

    temp = this->first;

    do
    {
        cout<<"| "<<temp->data<<" | -> ";
        temp = temp->next;

    } while (temp != this->last->next);

    cout<<endl;
    
}

int SinglyCL :: Count()
{
    return this->iCount;
}

void SinglyCL :: InsertFirst(int iNo)
{
    PNODE newn = NULL;

    newn = new NODE;
    newn->data = iNo;
    newn->next = NULL;

    if( (this->first == NULL) && (this->last == NULL))
    {
        this->first = newn;
        this->last = newn;
    }
    else
    {
        newn->next = this->first;
        this->first = newn;
    }

    this->last->next = this->first;
    this->iCount++;

}

void SinglyCL :: InsertLast(int iNo)
{

    PNODE newn = NULL;

    newn = new NODE;
    newn->data = iNo;
    newn->next = NULL;

    if( (this->first == NULL) && (this->last == NULL))
    {
        this->first = newn;
        this->last = newn;
    }
    else
    {
        this->last->next = newn;
        this->last = newn;

    }

    this->last->next = this->first;
    this->iCount++;
}

void SinglyCL :: InsertAtPos(int iNo,int iPos)
{
    int i = 0;
    PNODE newn = NULL;
    PNODE temp = NULL;

    int iCount = this->Count();

    if(iPos < 1 || iPos > (iCount + 1))
    {
        printf("Invalid Position\n");
    }

    if(iPos == 1)
    {
        this->InsertFirst(iNo);
    }
    else if(iPos == (iCount + 1))
    {
        this->InsertLast(iNo);
    }
    else
    {
        temp = this->first;

        for(i = 1 ; i < iPos - 1 ; i++)
        {
            temp = temp->next;
        }

        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = iNo;
        newn->next = NULL;

        newn->next = temp->next;
        temp->next = newn;
    }
}

void SinglyCL :: DeleteFirst()
{
    if(this->first == NULL && this->last == NULL)
    {
        return;
    }
    else if(this->first == this->last)
    {
        delete this->first;
        this->first = NULL;
        this->last = NULL;
    }
    else
    {
        this->first = this->first->next;
        delete this->last->next;
        this->last->next = this->first;

    }

    this->iCount--;
}

void SinglyCL :: DeleteLast()
{
    PNODE temp = NULL;

    if(this->first == NULL && this->last == NULL)
    {
        return;
    }
    else if(this->first == this->last)
    {
        delete this->first;
        this->first = NULL;
        this->last = NULL;
    }
    else
    {
        temp =this->first;

        while(temp->next != this->last)
        {
            temp = temp->next;
        }

        this->last = temp;
        delete temp->next;
        this->last->next = this->first;
    }

    this->iCount--;
}

void SinglyCL :: DeleteAtPos(int iPos)
{
    int i = 0;
    PNODE temp = NULL;
    PNODE target = NULL;

    int iCount = this->Count();

    if(iPos < 1 || iPos > (iCount))
    {
        printf("Invalid Position\n");
    }

    if(iPos == 1)
    {
        this->DeleteFirst();
    }
    else if(iPos == (iCount))
    {
        this->DeleteLast();
    }
    else
    {
        temp = this->first;

        for(i = 1 ; i < iPos - 1 ; i++)
        {
            temp = temp->next;
        }

        target = temp->next;
        temp = temp->next;
        delete target;
    }

}


int main()
{

    int iRet = 0;
    SinglyCL sobj;

    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of Node are : "<<iRet<<endl;

    sobj.InsertLast(101);
    sobj.InsertLast(121);

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of Node are : "<<iRet<<endl;


    sobj.DeleteFirst();

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of Node are : "<<iRet<<endl;

    sobj.DeleteLast();

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of Node are : "<<iRet<<endl;

    sobj.InsertAtPos(1000,4);

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of Node are : "<<iRet<<endl;

    sobj.DeleteAtPos(4);

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of Node are : "<<iRet<<endl;

    return 0;

}

