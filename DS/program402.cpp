#include<iostream>
#pragma pack(1)
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;

class SinglyLL
{
    private :
        PNODE first;
        int iCount;

    public : 
        SinglyLL()
        {
            cout<<"Inside counstructor"<<endl;
            this->first = NULL;
            this->iCount = 0;
        }

        void Display()
        {

        }

        int Count()
        {
            return this->iCount;
        }

        void InsertFirst(int iNo)
        {

        }

        void InsertLast(int iNo)
        {

        }

        void InsertAtPos(int iNo,int iPos)
        {

        }

        void DeleteFirst()
        {

        }

        void DeleteLast()
        {
            
        }

        void DeleteAtPos(int iPos)
        {
            
        }
};

int main()
{
    
    SinglyLL sobj;

    return 0;
}