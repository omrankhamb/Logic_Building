#include<iostream>
using namespace std;

template<class T>
class node
{
    public :
        int data;
        node<T> *next;
    public :
        node(T);
};

template<class T>
node<T> :: node(T data)
{
    this->data = data;
    this->next = NULL;
}

template<class T>
class SinglyLL
{
    private : 
        struct node<T> * first;
        int iCnt;

    public :
        SinglyLL();
        void Display();
        int Count();

        void InsertFirst(T);
        void InsertLast(T);
        void InsertAtPos(T ,int);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int);
};

template<class T>
SinglyLL<T> :: SinglyLL(){
    this->first = NULL;
    this->iCnt = 0;
}

template<class T>
void SinglyLL<T> ::  Display()
{
    node<T> *temp = NULL;
    temp = this->first;

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" | -> ";
        temp = temp->next;
    }
    cout<<"NULL\n";
}

template<class T>
int SinglyLL<T> :: Count()
{
    return this->iCnt;
}

template<class T>
void SinglyLL<T> :: InsertFirst(T iNo)
{
    node<T> *newn = NULL;
    newn = new node<T>(iNo);

    if(this->first == NULL)
    {
        this->first = newn;
    }
    else
    {
        newn->next = this->first;
        this->first = newn;
    }

    this->iCnt++;
}

template<class T>
void SinglyLL<T> :: InsertLast(T iNo)
{
    node<T> *newn = NULL;
    node<T> *temp = NULL;
    newn = new node<T>(iNo);

    if(this->first == NULL)
    {
        this->first = newn;
    }
    else
    {   
        temp = this->first;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
    }

    this->iCnt++;
}

template<class T>
void SinglyLL<T> :: InsertAtPos(T iNo ,int iPos)
{
    node<T> *newn = NULL;
    node<T> *temp = NULL;
    if(iPos < 1 || iPos > this->iCnt + 1)
    {
        cout<<"Invalid Position\n";
        return ;
    }

    if(iPos == 1)
    {
        InsertFirst(iNo);
    }
    else if(iPos == this->iCnt + 1)
    {
        InsertLast(iNo);
        this->iCnt++;
    }
    else
    {
        temp = this->first;

        for(int i = 1 ; i < iPos -1 ; i++)
        {
            temp = temp->next;
        }

        newn = new node<T>(iNo);
        newn->next = temp->next;
        temp->next = newn;
        this->iCnt++;
    }

}

template<class T>
void SinglyLL<T> :: DeleteFirst()
{
    node<T> *temp = NULL;

    if(this->first == NULL)
    {
        return ;
    }
    else if(this->first->next == NULL)
    {
        delete this->first;
        this->first == NULL;
    }
    else
    {
        temp = this->first;
        this->first = this->first->next;
        delete temp;
        
    }
    this->iCnt--;
}

template<class T>
void SinglyLL<T> :: DeleteLast()
{
    node<T> *temp = NULL;

    if(this->first == NULL)
    {
        return ;
    }
    else if(this->first->next == NULL)
    {
        delete this->first;
        this->first == NULL;
    }
    else
    {
        temp = this->first;
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
        
    }
    this->iCnt--;
}

template<class T>
void SinglyLL<T> :: DeleteAtPos(int iPos)
{
    node<T> *temp = NULL;
    node<T> *target = NULL;

    if(iPos < 1 || iPos > this->iCnt + 1)
    {
        cout<<"Invalid Position\n";
        return ;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == this->iCnt + 1)
    {
        DeleteLast();
    }
    else
    {
        temp = this->first;

        for(int i = 1 ; i < iPos -1 ; i++)
        {
            temp = temp->next;
        }
        
        target = temp->next;
        temp->next = temp->next->next;
        delete target;    
        this->iCnt--;
    }

}

int main()
{
    SinglyLL<int> sobj;
    int iRet = 0;

    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of Element are : "<<iRet<<endl;

    sobj.InsertLast(101);
    sobj.InsertLast(111);
    sobj.InsertLast(121);

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of Element are : "<<iRet<<endl;

    sobj.DeleteFirst();

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of Element are : "<<iRet<<endl;

    sobj.DeleteLast();

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of Element are : "<<iRet<<endl;


    sobj.InsertAtPos(100,3);

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of Element are : "<<iRet<<endl;

    sobj.DeleteAtPos(3);

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of Element are : "<<iRet<<endl;

    

    return 0;
}