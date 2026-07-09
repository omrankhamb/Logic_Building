#include<iostream>
using namespace std;
#pragma pack(1)

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node* PNODE;

class DoublyLL
{
    private:
        PNODE first;
        int iCount;
    
    public:
        DoublyLL();
        void Display();
        int Count();
        void InsertFirst(int iNO);
        void InsertLast(int iNO);
        void InsertAtPos(int iNO,int iPos);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);

};

DoublyLL :: DoublyLL()
{
    this->first = NULL;
    this->iCount = 0;
}

void DoublyLL :: Display()
{
    PNODE temp = NULL;

    temp = this->first;

    cout<<"NULL <=>";
    while (temp)
    {
        cout<<"| "<<temp->data<<" | <=> ";
        temp = temp->next;
    }

    cout<<"NULL\n";
    
}

int DoublyLL :: Count()
{
    return this->iCount;
}

void DoublyLL :: InsertFirst(int iNO)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn->data = iNO;
    newn->next = NULL;
    newn->prev = NULL;

    if(this->first == NULL)
    {
        this->first = newn;
    }
    else
    {
        newn->next = this->first;
        this->first->prev = newn;
        this->first = newn;
    }

    this->iCount++;

}
void DoublyLL :: InsertLast(int iNo)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = new NODE;

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(this->first == NULL)
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
        
        temp->next = newn;
        newn->prev = temp;

    }

    this->iCount++;
}
void DoublyLL :: InsertAtPos(int iNo,int iPos)
{
    int i = 0;
    PNODE temp  = NULL;
    PNODE newn  = NULL;

    if((iPos < 1) || (iPos > (this->iCount + 1)))
    {
        cout<<"Invalid Position\n";
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

        for(i = 1 ; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        newn = new NODE;

        newn->data = iNo;
        newn->next = NULL;
        newn->prev = NULL;

        newn->next = temp->next;
        temp->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;

        this->iCount++;

    }
}
void DoublyLL :: DeleteFirst()
{
    if(this->first == NULL)
    {
        return;
    }
    else if (this->first->next == NULL)
    {
        free(this->first);
        this->first = NULL;
    }
    else
    {
        this->first = this->first->next;
        delete this->first->prev;
        this->first->prev = NULL;

    }
    this->iCount--;

}

void DoublyLL :: DeleteLast()
{
    PNODE temp = NULL;

    if(this->first == NULL)
    {
        return;
    }
    else if (this->first->next == NULL)
    {
        free(this->first);
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
void DoublyLL :: DeleteAtPos(int iPos)
{
    int i = 0;
    PNODE temp  = NULL;

    if((iPos < 1) || (iPos > (this->iCount + 1)))
    {
        cout<<"Invalid Position\n";
        return;
    }

    if(iPos == 1)
    {
        this->DeleteFirst();
    }
    else if(iPos == (this->iCount + 1))
    {
        this->DeleteLast();
    }
    else
    {
        temp = this->first;

        for(i = 1 ; i < iPos - 1; i++)
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
    DoublyLL dobj;

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
                dobj.InsertFirst(iValue);

                break;
            
            case 2 :
                cout<<"Enter The Value :\n ";
                cin>>iValue;
                dobj.InsertLast(iValue);

                break;

            case 3 :
                cout<<"Enter The Value :\n ";
                cin>>iValue;
                cout<<"Enter The Position\n:";
                cin>>iPosition;
                dobj.InsertAtPos(iValue,iPosition);

                break;
        
            case 4 :
                dobj.DeleteFirst();
                break;

            case 5 :
                dobj.DeleteLast();
                break;

            case 6 :
                cout<<"Enter The Position\n:";
                cin>>iPosition;
                dobj.DeleteAtPos(iPosition);
                break;

            case 7:
                cout<<"Elemets of Linkedlist are : \n";
                dobj.Display();
                break;

            case 8:
                iRet = dobj.Count();
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
