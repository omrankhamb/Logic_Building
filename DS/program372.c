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
    while (first != NULL)
    {
        printf("%d\t",first->data);
        first = first->next;
    }
    
}

int Count(PNODE first)
{
    return 0;
}

void InsertFirst(PPNODE first,int iNO)
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

    InsertFirst(&head,101);
    InsertFirst(&head,51);
    InsertFirst(&head,21);
    InsertFirst(&head,11);

    Display(head);

    return 0;
}