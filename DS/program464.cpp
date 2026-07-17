#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

#pragma pack(1)
class Stack
{
    private : 
        struct node * first;
        int iCount;

    public :
        Stack();
        void Push(int iNo);     // InsertFirst
        int Pop();              // DeleteFirst
        int Pip();              // DeleteFirst  // Give only data
        void Display();
        int Count();

};

Stack :: Stack()
{
    this->first = NULL;
    this->iCount = 0;
}

void Stack :: Push(int iNo)
{
    struct node *newn = NULL;  

    newn = new struct node;
    // newn = (struct node *)malloc(sizeof(struct node));

    newn->data = iNo;
    newn->next = NULL;

    newn->next = this->first;
    this->first = newn;    

    this->iCount++;
}     

int Stack :: Pop()
{
    return 0;
}              

int Stack :: Pip()
{
    return 0;
}              

void Stack :: Display()
{}

int Stack ::Count()
{
    return iCount;  
}


int main()
{
    Stack sobj;
    int iRet = 0;

    sobj.Push(11);
    sobj.Push(21);
    sobj.Push(51);
    sobj.Push(151);

    iRet = sobj.Count();
    cout<<"Elements of stack are : "<<iRet<<endl;


    return 0;
}