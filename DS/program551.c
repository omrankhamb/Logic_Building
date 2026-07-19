#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void Display(PNODE first)
{
    if(first != NULL)
    {
        printf("| %d | ->",first->data);
        first = first->next;
        Display(first);
    }

}

int Count(PNODE first)
{
    static int iCnt = 0;

    if(first != NULL)
    {
        iCnt++;
        first = first->next;
        Count(first);
    }

    return iCnt;
}

void InsertFirst(PPNODE first,int iNo)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if((*first) == NULL)        // LL is empty
    {
        (*first) = newn;
    }
    else                        // LL contain at least one node
    {
        newn->next = (*first);
        (*first) = newn;
    }
}


int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head,51);
    InsertFirst(&head,31);
    InsertFirst(&head,11);
    InsertFirst(&head,2);

    Display(head);
    iRet = Count(head);

    printf("Number of nofes are : %d \n",iRet);


    return 0;
}