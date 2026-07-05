#include<stdio.h>
#pragma pack(1)

struct node
{
    int data;
    struct node *next;    
};

// Iteration
typedef struct node NODE;
typedef struct node * PNODE;

int Count(PNODE first)
{
    int iCnt = 0;
    
    while (first != NULL)
    {
        iCnt++;
        first = first->next; 
    }

    return iCnt;

}

void display(PNODE FIRST)
{
    while (FIRST)
    {
        printf("%d\n",FIRST->data);
        FIRST = FIRST->next;
    }
    
}
int main()
{
    PNODE head = NULL;

    int iCount = 0;
    int iRet = 0;

    NODE obj1,obj2,obj3;

    head = &obj1;

    obj1.data = 11;
    obj1.next = &obj2;

    obj2.data = 21;
    obj2.next = &obj3;

    obj3.data = 51;
    obj3.next = NULL;

    iRet = Count(head);     //Count(100);
    printf("Number of nodes are : %d",iRet);
    return 0;
}

