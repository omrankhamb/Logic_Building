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
        SinglyLL();
        void Display();
        int Count();
        void InsertFirst(int iNo);
        void InsertLast(int iNo);
        void InsertAtPos(int iNo,int iPos);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

//class  :: Constrcutor
SinglyLL :: SinglyLL()
{
    this->first = NULL;
    this->iCount = 0;
}

void  SinglyLL :: Display()
{
    PNODE temp = NULL;

    temp = this->first;

    while (temp != NULL)
    {
        cout<<"| "<<temp->data<<" | -> ";
        temp = temp->next;
    }

    cout<<"NULL"<<endl;
    
}

int SinglyLL :: Count()
{
    return this->iCount;
}

void SinglyLL :: InsertFirst(int iNo)
{
    PNODE newn = NULL;

    newn = new NODE;
    newn->data = iNo;
    newn->next = NULL;

    if(this->first == NULL)
    {
        this->first = newn;
    }
    else
    {
        newn->next = this->first;
        this->first = newn;
    }

    this->iCount++; // Important
}

void SinglyLL :: InsertLast(int iNo)
{
    PNODE newn = NULL;

    newn = new NODE;
    newn->data = iNo;
    newn->next = NULL;

    if(this->first == NULL)
    {
        this->first = newn;
    }
    else
    {
        PNODE temp = NULL;

        temp = this->first;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
        
    }

    this->iCount++;     // Important $
}

void SinglyLL :: InsertAtPos(int iNo,int iPos)
{
    int i = 0;
    PNODE newn = NULL;
    PNODE temp = NULL;

    if((iPos < 1) || iPos > (this->iCount + 1))
    {
        cout<<"Invalid positio"<<endl;
        return;
    }

    if(iPos == 1)
    {
        this->InsertFirst(iNo);
    }
    else if(iPos == (this->iCount + 1))
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

        newn = new NODE;
        newn->data = iNo;
        newn->next = NULL;

        newn->next = temp->next;
        temp->next = newn;

        this->iCount++;
    }
}

void SinglyLL :: DeleteFirst()
{
    PNODE temp = NULL;

    if(this->first == NULL)
    {
        return;     // this->iCount will neative
    }
    else if(this->first->next == NULL)
    {
        delete this->first;
        this->first = NULL;
    }
    else
    {
        temp = this->first;

        this->first = this->first->next;

        delete temp;
    }

    this->iCount--;
}

void SinglyLL :: DeleteLast()
{
    PNODE temp = NULL;

    if(this->first == NULL)
    {
        return;     // this->iCount will neative
    }
    else if(this->first->next == NULL)
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

    this->iCount--;
}

void SinglyLL :: DeleteAtPos(int iPos)
{
    int i = 0;
    PNODE temp = NULL; 
    PNODE target = NULL;

    if((iPos < 1) || iPos > (this->iCount + 1))
    {
        cout<<"Invalid position"<<endl;
        return;
    }

    if(iPos == 1)
    {
        this->DeleteFirst();
    }
    else if(iPos == (this->iCount))
    {
        this->DeleteLast();
    }
    else
    {
        PNODE temp = NULL;
        temp = this->first;

        for(i = 1 ; i < iPos - 1 ; i++)
        {
            temp = temp->next;
        }

        target = temp->next;
        temp->next = target->next;
        delete target;

        this->iCount--;
    }
}


int main()
{
    SinglyLL sobj;

    int iPosition = 0;
    int iChoice = 0;
    int iValue = 0;
    int iRet = 0;

    while (iChoice != 9)
    {
        cout<<"--------------------------------------\n";
        cout<<"Enter Your choice \n";
        cout<<"--------------------------------------\n";
        cout<<"1 : Insert Node At First Position\n";
        cout<<"2 : Insert Node At Last Position\n";
        cout<<"3 : Insert Node At Given Position\n";
        cout<<"4 : Delete Node At First Position\n";
        cout<<"5 : Delete Node At Last Position\n";
        cout<<"6 : Delete Node At Given Position\n";
        cout<<"7 : Display the elements\n";
        cout<<"8 : Count The Number of elements\n";
        cout<<"9 : Terminate the application\n";
        cout<<"--------------------------------------\n";

        cin>>iChoice;

        switch (iChoice)
        {
            case 1:
                cout<<"Enter The Value :\n ";
                cin>>iValue;
                sobj.InsertFirst(iValue);

                break;
            
            case 2 :
                cout<<"Enter The Value :\n ";
                cin>>iValue;
                sobj.InsertLast(iValue);

                break;

            case 3 :
                cout<<"Enter The Value :\n ";
                cin>>iValue;
                cout<<"Enter The Position\n:";
                cin>>iPosition;
                sobj.InsertAtPos(iValue,iPosition);

                break;
        
            case 4 :
                sobj.DeleteFirst();
                break;

            case 5 :
                sobj.DeleteLast();
                break;

            case 6 :
                cout<<"Enter The Position\n:";
                cin>>iPosition;
                sobj.DeleteAtPos(iPosition);
                break;

            case 7:
                cout<<"Elemets of Linkedlist are : \n";
                sobj.Display();
                break;

            case 8:
                iRet = sobj.Count();
                cout<<"Number of Nodes : "<<iRet<<endl;
                break;
        
            case 9:
                cout<<"Thank you For Using Marvellous Infosystem Application\n";
                break;

            default:
                cout<<"Invalid Choice\n";
                break;;
        }
                
    }
    return 0;
}