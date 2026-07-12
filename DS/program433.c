#include<stdio.h>
#include<stdlib.h>
#pragma pack(1)

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Display(PNODE first,PNODE last)
{
    
}

int Count(PNODE first,PNODE last)
{
    int iCount = 0;
    return iCount;
}

void InsertFirst(PPNODE first,PPNODE last,int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if((*first) == NULL && ((*last) == NULL))
    {
        (*first) = newn;
        (*last) = newn;
    }
    else
    {
        newn->next = (*first);
        (*first)->prev = newn;
        (*first) = (newn);
    }

    (*last)->next = (*first);
    (*first)->prev = (*last);
}

void InsertLast(PPNODE first,PPNODE last,int iNo)
{}

void InsertAtPos(PPNODE first,PPNODE last,int iNo,int iPos)
{}

void DeleteFirst(PPNODE first,PPNODE last)
{}

void DeleteLast(PPNODE first,PPNODE last)
{}

void DeleteAtPos(PPNODE first,PPNODE last,int iPos)
{}


int main()
{
    int iRet = 0;
    PNODE head = NULL;
    PNODE tail = NULL;

    InsertFirst(&head,&tail,51);
    InsertFirst(&head,&tail,21);
    InsertFirst(&head,&tail,11);

    Display(head,tail); 

    return 0;
}