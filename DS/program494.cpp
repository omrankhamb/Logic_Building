#include <iostream>
using namespace std;

template<class T>
class node
{
public:
    T data;
    node<T> *next;
    node<T> *prev;

public:
    node(T);
};

template<class T>
node<T> ::node(T data)
{
    this->data = data;
    this->next = NULL;
    this->prev = NULL;
}

template<class T>
class DoublyLL
{
public:
    node<T> *first;
    int iCnt;

public:
    DoublyLL();
    void Display();
    int Count();

    void InsertFirst(T iNo);
    void InsertLast(T iNo);
    void InsertAtPos(T iNo, int iPos);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int);
};

template<class T>
DoublyLL<T> ::DoublyLL()
{
    this->first = NULL;
    this->iCnt = 0;
}

template<class T>
void DoublyLL<T> ::Display()
{
    node<T> *temp = NULL;

    temp = this->first;

    while (temp != NULL)
    {
        cout << "| " << temp->data << " | <=> ";
        temp = temp->next;
    }

    cout << "NULL\n";
}

template<class T>
int DoublyLL<T> ::Count()
{
    return this->iCnt;
}

template<class T>
void DoublyLL<T> ::InsertFirst(T iNo)
{
    node<T> *newn = NULL;
    newn = new node<T>(iNo);

    if (this->first == NULL)
    {
        this->first = newn;
    }
    else
    {
        newn->next = this->first;
        this->first->prev = newn;
        this->first = newn;
    }
    this->iCnt++;
}

template<class T>
void DoublyLL<T> ::InsertLast(T iNo)
{
    node<T> *newn = NULL;
    node<T> *temp = NULL;

    newn = new node<T>(iNo);

    if (this->first == NULL)
    {
        this->first = newn;
    }
    else
    {
        temp = this->first;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        newn = new node<T>(iNo);
        temp->next = newn;
        newn->prev = temp;
    }

    this->iCnt++;
}

template<class T>
void DoublyLL<T> ::InsertAtPos(T iNo, int iPos)
{
    node<T> *newn = NULL;
    node<T> *temp = NULL;

    if (iPos < 1 || iPos > (this->iCnt + 1))
    {
        cout << "Invalid Position \n";
        return;
    }

    if (iPos == 1)
    {
        InsertFirst(iNo);
    }
    else if (iPos == this->iCnt + 1)
    {
        InsertLast(iNo);
    }
    else
    {
        temp = this->first;
        for (int i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }
        newn = new node<T>(iNo);
        newn->next = temp->next;
        temp->next->prev = newn;
        newn->prev = temp;
        temp->next = newn;

        this->iCnt++;
    }
}

template<class T>
void DoublyLL<T> ::DeleteFirst()
{
    if (this->first == NULL)
    {
        return;
    }
    else if (this->first->next == NULL)
    {
        delete this->first;
        this->first = NULL;
    }
    else
    {
        this->first = this->first->next;
        delete this->first->prev;
        this->first->prev = NULL;
    }

    this->iCnt--;
}

template<class T>
void DoublyLL<T> ::DeleteLast()
{
    node<T> *temp = NULL;

    if (this->first == NULL)
    {
        return;
    }
    else if (this->first->next == NULL)
    {
        delete this->first;
        this->first = NULL;
    }
    else
    {
        temp = this->first;

        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = NULL;
    }
    this->iCnt--;
}

template<class T>
void DoublyLL<T> ::DeleteAtPos(int iPos)
{
    node<T> *temp = NULL;
    if (iPos < 1 || iPos > this->iCnt)
    {
        cout << "Invlid Position\n";
        return;
    }

    if (iPos == 1)
    {
        DeleteFirst();
    }
    else if (iPos == this->iCnt)
    {
        DeleteLast();
    }
    else
    {
        temp = this->first;

        for (int i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;
        delete temp->next->prev;
        temp->next->prev = temp;

        this->iCnt--;
    }
}

int main()
{
    DoublyLL<int> obj;
    int iRet = 0;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    iRet = obj.Count();
    obj.Display();
    cout << "Number of Node Are : " << iRet << endl;

    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(121);

    iRet = obj.Count();
    obj.Display();
    cout << "Number of Node Are : " << iRet << endl;

    obj.DeleteFirst();

    iRet = obj.Count();
    obj.Display();
    cout << "Number of Node Are : " << iRet << endl;

    obj.DeleteLast();

    iRet = obj.Count();
    obj.Display();
    cout << "Number of Node Are : " << iRet << endl;

    obj.InsertAtPos(100, 3);

    iRet = obj.Count();
    obj.Display();
    cout << "Number of Node Are : " << iRet << endl;

    obj.DeleteAtPos(3);

    iRet = obj.Count();
    obj.Display();
    cout << "Number of Node Are : " << iRet << endl;

    return 0;
}