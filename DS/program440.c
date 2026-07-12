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
    if((first)== NULL && last == NULL)
    {
        return;
    }

    printf("<=>");

    do
    {
        printf("| %d | <=> ",first->data);
        first = first->next;

    } while (first != last->next);
    
    printf("<=>\n");
}

int Count(PNODE first,PNODE last)
{
    int iCount = 0;

    if(first == NULL && last == NULL)
    {
        return iCount;
    }

    do
    {
        iCount++;
        first = first->next;

    }while(first != last->next);

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
        (*last)->next = newn;
        newn->prev = (*last);
        (*last) = newn;
    }

    (*last)->next = (*first);
    (*first)->prev = (*last);
}

void InsertAtPos(PPNODE first,PPNODE last,int iNo,int iPos)
{
    int iCount = Count((*first),(*last));
    int i = 0;
    PNODE newn = NULL;

    if((iPos < 1) || (iPos > (iCount + 1)))
    {
        printf("Invalis position\n");
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(first,last,iNo);
    }
    else if(iPos == (iCount +1))
    {
        InsertLast(first,last,iNo);
    }
    else
    {
        PNODE temp = NULL;
        
        temp = (*first);

        for(i = 1 ; i < iPos -1 ; i++)
        {
            temp = temp->next;
        }

        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = iNo;
        newn->next = NULL;
        newn->prev = NULL;

        newn->next = temp->next;
        temp->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;
    }
}

void DeleteFirst(PPNODE first,PPNODE last)
{
    if(((*first) == NULL) && ((*last) == NULL))
    {
        return;
    }
    else if((*first) == (*last))
    {
        free(*first);
        (*first) = NULL;
        (*last) = NULL;
    }
    else
    {
        (*first) = (*first)->next;
        free((*first)->prev);
        // free((*last)->next);

        (*first)->prev = (*last);
        (*last)->next = (*first);
    }

}

void DeleteLast(PPNODE first,PPNODE last)
{
    if(((*first) == NULL) && ((*last) == NULL))
    {
        return;
    }
    else if((*first) == (*last))
    {
        free(*first);
        (*first) = NULL;
        (*last) = NULL;
    }
    else
    {
        (*last) = (*last)->prev;
        free((*last)->next);
        // free((*first)->prev); // Both work
        (*first)->prev = (*last);
        (*last)->next = (*first);

    }

    
}

void DeleteAtPos(PPNODE first,PPNODE last,int iPos)
{
    int iCount = Count((*first),(*last));
    int i = 0;

    if((iPos < 1) || (iPos > (iCount)))
    {
        printf("Invalis position\n");
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst(first,last);
    }
    else if(iPos == (iCount))
    {
        DeleteLast(first,last);
    }
    else
    {
        PNODE temp = NULL;
        
        temp = (*first);

        for(i = 1 ; i < iPos -1 ; i++)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;
        free(temp->next->prev);
        temp->next->prev = temp;

    }   
}


int main()
{
    PNODE head = NULL;
    PNODE tail = NULL;

    int iRet = 0;

    InsertFirst(&head,&tail,51);
    InsertFirst(&head,&tail,21);
    InsertFirst(&head,&tail,11);

    Display(head,tail);
    iRet = Count(head,tail);
    printf("Number of Nodes are : %d\n",iRet);

    InsertLast(&head,&tail,101);
    InsertLast(&head,&tail,111);
    InsertLast(&head,&tail,121);

    
    Display(head,tail);
    iRet = Count(head,tail);
    printf("Number of Nodes are : %d\n",iRet);

    DeleteFirst(&head,&tail);

    Display(head,tail);
    iRet = Count(head,tail);
    printf("Number of Nodes are : %d\n",iRet);

    DeleteLast(&head,&tail);

    Display(head,tail);
    iRet = Count(head,tail);
    printf("Number of Nodes are : %d\n",iRet);

    InsertAtPos(&head,&tail,100,3);

    Display(head,tail);
    iRet = Count(head,tail);
    printf("Number of Nodes are : %d\n",iRet);

    DeleteAtPos(&head,&tail,3);

    Display(head,tail);
    iRet = Count(head,tail);
    printf("Number of Nodes are : %d\n",iRet);


    return 0;
}