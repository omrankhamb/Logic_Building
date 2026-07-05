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
    while (first)
    {
        printf("| %d | -> ",first->data);
        first = first->next;
    }
    printf("NULL\n");
    
}

int Count(PNODE first)
{
    int iCount = 0;

    while (first)
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
    // error

    if(NULL =  (*first) )        // LL Is empty
    {
        (*first) = newn;
    }
    else        // LL Contaiains At least one node
    {
        newn->next = (*first);
        (*first) = newn;
    }

}

void InsertLast(PPNODE first,int iNO)
{
    PNODE newn = NULL;

    newn =  (PNODE)malloc(sizeof(NODE));

    newn->data = iNO;
    newn->next = NULL;

    // (*first) is the alies of head
    if((*first) == NULL)        // LL Is empty
    {
        (*first) = newn;
    }
    else        // LL Contaiains At least one node
    {
        
    }
}

void InsertAtPos(PPNODE first,int iNO,int iPos)
{}

void DeleteFirst(PPNODE first)
{}

void DeleteLat(PPNODE first)
{}

void DelteAtPos(PPNODE first,int iPos)
{}

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
    return 0;
}