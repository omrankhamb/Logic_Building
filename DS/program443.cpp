#include <iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node *PNODE;

#pragma pack(1)
class DoublyCL
{
private:
    PNODE first;
    PNODE last;
    int iCount;

public:
    DoublyCL();

    void Display();
    int Count();

    void InsertFirst(int iNo);
    void InsertLast(int iNo);
    void InsertAtPos(int iNo, int iPos);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int ipos);
};

DoublyCL ::DoublyCL()
{
    cout << "Inside Constructor\n";
    this->first = NULL;
    this->last = NULL;
    this->iCount = 0;
}

void DoublyCL ::Display()
{
    PNODE temp = NULL;
    temp = this->first;
    cout << "<=>";
    do
    {
        cout << "| " << temp->data << " | <=>";
        temp = temp->next;
    } while (temp != this->last->next);
    cout << endl;
}

int DoublyCL ::Count()
{
    return this->iCount;
}

void DoublyCL ::InsertFirst(int iNo)
{
    PNODE newn = NULL;
    newn = new NODE;
    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if ((this->first == NULL) && (this->last == NULL))
    {
        this->first = newn;
        this->last = newn;
    }
    else
    {
        newn->next = this->first;
        this->first->prev = newn;
        this->first = newn;
    }

    this->iCount++;
    this->last->next = this->first;
    this->first->prev = this->last;
}

void DoublyCL ::InsertLast(int iNo)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if ((this->first == NULL) && (this->last == NULL))
    {
        this->first = newn;
        this->last = newn;
    }
    else
    {
        this->last->next = newn;
        newn->prev = this->last;
        this->last = newn;
    }

    this->iCount++;
    this->first->prev = this->last;
    this->last->next = this->first;
}

void DoublyCL ::InsertAtPos(int iNo, int iPos)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    int i = 0;

    if (iPos < 1 || iPos > (this->iCount + 1))
    {
        cout << "Invalid Position\n";
        return;
    }

    if (iPos == 1)
    {
        InsertFirst(iNo);
    }
    else if (iPos == (this->iCount + 1))
    {
        InsertLast(iNo);
    }
    else
    {
        temp = this->first;

        newn = new NODE;

        newn->data = iNo;
        newn->next = NULL;
        newn->prev = NULL;

        for (i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;

        this->iCount++;
    }
}

void DoublyCL ::DeleteFirst()
{
    if ((this->first == NULL) && (this->last == NULL))
    {
        return;
    }
    else if (this->first == this->last)
    {
        delete this->first;
        this->first = NULL;
        this->last = NULL;
    }
    else
    {
        this->first = this->first->next;
        delete this->first->prev;
    }

    this->iCount--;
    this->first->prev = this->last;
    this->last->next = this->first;
}

void DoublyCL ::DeleteLast()
{
    if ((this->first == NULL) && (this->last == NULL))
    {
        return;
    }
    else if (this->first == this->last)
    {
        delete this->first;
        this->first = NULL;
        this->last = NULL;
    }
    else
    {
        this->last = this->last->prev;
        delete this->last->next;
    }

    this->iCount--;
    this->first->prev = this->last;
    this->last->next = this->first;
}

void DoublyCL ::DeleteAtPos(int iPos)
{
    PNODE temp = NULL;
    int i = 0;

    if (iPos < 1 || iPos > (this->iCount))
    {
        return;
    }

    if (iPos == 1)
    {
        DeleteFirst();
    }
    else if (iPos == this->iCount)
    {
        DeleteLast();
    }
    else
    {
        temp = this->first;

        for (i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;
        delete temp->next->prev;
        temp->next->prev = temp;
        this->iCount--;
    }
}

int main()
{
    int iRet = 0;
    DoublyCL dobj;

    dobj.InsertFirst(51);
    dobj.InsertFirst(21);
    dobj.InsertFirst(11);

    dobj.Display();
    iRet = dobj.Count();
    cout << "Number of Node Are : " << iRet << endl;

    dobj.InsertLast(101);
    dobj.InsertLast(111);
    dobj.InsertLast(121);

    dobj.Display();
    iRet = dobj.Count();
    cout << "Number of Node Are : " << iRet << endl;

    dobj.DeleteFirst();

    dobj.Display();
    iRet = dobj.Count();
    cout << "Number of Node Are : " << iRet << endl;

    dobj.DeleteLast();

    dobj.Display();
    iRet = dobj.Count();
    cout << "Number of Node Are : " << iRet << endl;

    dobj.InsertAtPos(105, 4);

    dobj.Display();
    iRet = dobj.Count();
    cout << "Number of Node Are : " << iRet << endl;

    dobj.DeleteAtPos(4);

    dobj.Display();
    iRet = dobj.Count();
    cout << "Number of Node Are : " << iRet << endl;

    return 0;
}