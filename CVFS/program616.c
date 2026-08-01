#include<stdlib.h>
#include<stdio.h>

#define MAXINODE 5

struct node
{
    int data;
    struct node *next;
};

typedef struct node INODE;
typedef struct node * PINODE;
typedef struct node ** PPINODE;


PINODE head = NULL;

// Data Inode linkedlist block DILB
void CreateDILB()
{
    
    int i = 0 ;
    PINODE temp = NULL;
    PINODE newn = NULL;

    for(i = 1 ; i <= MAXINODE ; i++)
    {
        newn = (PINODE)malloc(sizeof(INODE));
        newn->data = i;
        newn->next = NULL;
        if(temp == NULL)
        {
            
            head = newn;
            temp = head;
        }
        else
        {
            temp->next = newn;
            temp = temp->next;
        }
    }
    
}


void DisplayDILB()
{
    PINODE temp = head;
    while(temp != NULL)
    {
        printf("| %d |->",temp->data);
        temp = temp->next;
        
    }
}


int main()
{
    CreateDILB();
    DisplayDILB();
    return 0;
}