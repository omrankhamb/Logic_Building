#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;             // Pointer To structure
typedef struct node** PPNODE;           // Pointer to Pointer to structure

int main()
{
    PNODE head = NULL;
    
    return 0;
}