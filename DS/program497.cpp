#include<iostream>
using namespace std;

class node
{
    public :
        int data;
        node *next;

        node(int data)
        {
            this->data = data;
            this->next = NULL;
        }

};


class Stack
{
    public : 
        node *first;
        int iCnt;

    public : 
        Stack();
        void Display();
        int Count();

        void Push(int);
        void Pop();
        int Pip();

};

Stack :: Stack()
{
    this->first = NULL;
    this->iCnt = 0;
}

void Stack :: Display()
{
    node *temp = NULL;
    temp = this->first;

    while(temp!= NULL)
    {
        cout<<"| "<<temp->data<<" |\n";
        temp = temp->next;
    }
    cout<<"|______|\n";
}
int main()
{
    return 0;
}   