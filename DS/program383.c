#include<stdio.h>
#include<stdlib.h>
#pragma pack(1)

struct node{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;           
typedef struct node** PPNODE;

void Display(PNODE first)   // Call by value
{
    while (first != NULL    )           // type 1
    {
        printf("| %d | -> ",first->data);
        first = first->next;
    }
    printf("NULL\n");
    
}

int Count(PNODE first)
{
    int iCount = 0;

    while (first != NULL)    // type 1
    {
        first = first->next;
        iCount++;
    }

    return iCount;
}

void InsertFirst(PPNODE first,int iNO)
{
    PNODE newn = NULL;

    newn =  (PNODE)malloc(sizeof(NODE));

    newn->data = iNO;
    newn->next = NULL;

    // (*first) is the alies of head

    if(NULL == (*first))        // LL Is empty
    {
        (*first) = newn;
    }
    else                        // LL Contaiains At least one node
    {
        newn->next = (*first);
        (*first) = newn;
    }

}

void InsertLast(PPNODE first,int iNO)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn =  (PNODE)malloc(sizeof(NODE));

    newn->data = iNO;
    newn->next = NULL;

    // (*first) is the alies of head
    if((*first) == NULL)        // LL Is empty
    {
        (*first) = newn;
    }
    else                        // LL Contaiains At least one node
    {
        
        temp = (*first);

        while (temp->next != NULL)// type 2
        {
            temp = temp->next;
        }

        temp->next = newn;          
    }
}

void InsertAtPos(PPNODE first,int iNO,int iPos)
{
    int i = 0;
    int iCount = 0;
    PNODE temp = NULL;
    PNODE newn = NULL;
    iCount = Count((*first));

    if((iPos <1) || (iPos > (iCount + 1)))
    {
        printf("Invalid Position");     // Bad Programming practise
        return;
    }


    if(iPos == 1)   // Insertfirst 
    {
        InsertFirst(first,iNO);
    }
    else if(iPos == (iCount + 1))
    {
        InsertLast(first,iNO);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = iNO;
        newn->next = NULL;

        temp = (*first);

        for(i = 1 ; i < (iPos-1) ; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
    }
}

void DeleteFirst(PPNODE first)
{
    PNODE temp = NULL;
    if((*first) == NULL)                 // If LL is Empty
    {
        return;
    }
    else if((*first)->next == NULL)     // LL contains Only 1 node
    {
        free((*first));
        (*first) = NULL;
        // head = NULL;
    }
    else                                // LL Contains at least two node
    {
        temp = (*first);
        (*first) = (*first)->next;
        free(temp);
    }
}

void DeleteLast(PPNODE first)
{
    PNODE temp =NULL;
    if((*first) == NULL)                 // If LL is Empty
    {
        return;
    }
    else if((*first)->next == NULL)     // LL contains Only 1 node
    {
        free((*first));
        (*first) = NULL;
        // head = NULL;
    }
    else                                // LL Contains at least two node
    {
        temp = (*first);

        while (temp->next->next != NULL) // Type 3
        {
            temp = temp->next;
        }

        free(temp->next);
        temp->next = NULL;        
    }
}

void DelteAtPos(PPNODE first,int iPos)
{
    int iCount = 0;
    int i = 0;
    iCount = Count((*first));
    PNODE temp = NULL;

    if((iPos <1) || (iPos > (iCount)))  
    {
        printf("Invalid Position");     // Bad Programming practise
        return;
    }


    if(iPos == 1)   // Insertfirst 
    {
        DeleteFirst(first);
    }
    else if(iPos == (iCount))
    {
        DeleteLast(first);
    }
    else
    {
           
    }
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head,101);
    InsertFirst(&head,51);
    InsertFirst(&head,21);
    InsertFirst(&head,11);

    Display(head);
    iRet = Count(head);
    printf("Number Of Nodes are : %d\n",iRet);

    InsertLast(&head,111);
    InsertLast(&head,121);
    
    Display(head);
    iRet = Count(head);
    printf("Number Of Nodes are : %d\n",iRet);

    DeleteFirst(&head);

    Display(head);
    iRet = Count(head);
    printf("Number Of Nodes are : %d\n",iRet);

    DeleteLast(&head);

    Display(head);
    iRet = Count(head);
    printf("Number Of Nodes are : %d\n",iRet);

    InsertAtPos(&head,105,4);
    Display(head);
    iRet = Count(head);
    printf("Number Of Nodes are : %d\n",iRet);
    
    return 0;
}