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
    DIsplayDILB();
    return 0;
}