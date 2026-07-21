#include <iostream>
using namespace std;

template<class T>
class node
{
public:
    int data;
    node<T> *next;

    node(T data)
    {
        this->data = data;
        this->next = NULL;
    }
};

template<class T>
class SinglyCL
{
public:
    node<T> *first;
    node<T> *last;
    int iCnt;

public:
    SinglyCL()
    {
        this->first = NULL;
        this->last = NULL;
        this->iCnt = 0;
    }

public:
    void Display()
    {
        node<T> *temp = NULL;
        temp = this->first;

        do
        {
            cout << "| " << temp->data << " | -> ";
            temp = temp->next;
        } while (temp != last->next);
        cout<<endl;
    }

    int Count()
    {
        return this->iCnt;
    }

    void InsertFirst(int iNo)
    {
        node<T> *newn = NULL;
        newn = new node<T>(iNo);

        if ((this->first == NULL) && (this->last == NULL))
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
        this->iCnt++;
    }

    void InsertLast(int iNo)
    {
        node<T> *newn = NULL;
        newn = new node<T>(iNo);

        if ((this->first == NULL) && (this->last == NULL))
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
        this->iCnt++;
    }

    void InsertAtPos(int iNo, int iPos)
    {
        node<T> *newn = NULL;
        node<T> *temp = NULL;

        if (iPos < 1 || iPos > this->iCnt + 1)
        {
            cout << "Invalid Position\n";
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
            temp->next = newn;
            this->iCnt++;
        }

        this->last->next = this->first;
    }

    void DeleteFirst()
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
            delete this->last->next;
        }

        this->last->next = this->first;
        this->iCnt--;
    }

    void DeleteLast()
    {
        node<T> *temp = NULL;

        if (this->first == NULL && this->last == NULL)
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
            temp = this->first;
            while (temp->next != last)
            {
                temp = temp->next;
            }

            this->last = temp;
            delete temp->next;
        }

        this->last->next = this->first;
        this->iCnt--;
    }

    void DeleteAtPos(int iPos)
    {
        node<T> *temp = NULL;
        node<T> *target = NULL;
        int i = 0;
        if (iPos < 1 || iPos > this->iCnt)
        {
            cout << "Invalid postion\n";
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

            for (i = 1; i < iPos - 1; i++)
            {
                temp = temp->next;
            }

            target = temp->next;
            temp->next = temp->next->next;
            delete target;
            this->iCnt--;
        }
        this->last->next = this->first;
    }
};

int main()
{
    SinglyCL <int>obj;
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