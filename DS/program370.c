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
{}

int Count(PNODE first)
{return 0;}

void InsertFirst(PPNODE first,int iNO)
{}

void InsertLast(PPNODE first,int iNO)
{}

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
    return 0;
}