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
class Stack
{
public:
    node<T> *first;
    int iCnt;

public:
    Stack();
    void Display();
    int Count();

    void Push(T);
    void Pop();
    int Peek();
};

template<class T>
Stack<T> ::Stack()
{
    this->first = NULL;
    this->iCnt = 0;
}

template<class T>
void Stack<T> ::Display()
{
    node<T> *temp = NULL;
    temp = this->first;

    while (temp != NULL)
    {
        cout << "| " << temp->data << " |\n";
        temp = temp->next;
    }
    cout << "|____|\n";
}

template<class T>
void Stack<T> ::Push(T iNo) // InertFirst
{
    node<T> *newn = new node<T>(iNo);

    if (this->first == NULL)
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
void Stack<T> ::Pop() // DeleteFirst
{
    node<T> *target = NULL;

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
        target = this->first;
        this->first = this->first->next;
        delete target;
    }

    this->iCnt--;
}

template<class T>
int Stack<T> ::Peek()
{
    if (this->first == NULL)
    {
        cout << "Stack is Empty\n";
        return -1;
    }

    return this->first->data;
}

template<class T>
int Stack<T> :: Count()
{
    return this->iCnt;
}

int main()
{
    Stack<int> sobj;
    int iRet = 0;

    

    sobj.Push(11);
    sobj.Push(21);
    sobj.Push(51);
    sobj.Push(101);

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Elements of stack are : "<<iRet<<endl;

    sobj.Pop();
    cout<<"Popped Element is : "<<iRet<<endl;

    iRet = sobj.Count();
    sobj.Display();
    cout<<"Elements of stack are : "<<iRet<<endl;

    iRet = sobj.Peek();
    sobj.Pop();
    cout<<"Pipped elemet is : "<<iRet<<endl;
    sobj.Display();
    iRet = sobj.Count();
    cout<<"Elements of stack are : \n"<<iRet<<endl;

    return 0;
}