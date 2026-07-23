#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

// L D R
void Inorder(PNODE first)
{
    if (first != NULL)
    {
        Inorder(first->lchild);
        printf("%d\n", first->data);
        Inorder(first->rchild);
    }
}

// D L R
void Preorder(PNODE first)
{
    if (first != NULL)
    {
        printf("%d\n", first->data);
        Inorder(first->lchild);
        Inorder(first->rchild);
    }
}

// L R D
void PostOrder(PNODE first)
{
    if (first != NULL)
    {
        Inorder(first->lchild);
        Inorder(first->rchild);
        printf("%d\n", first->data);
    }
}

void Insert(PPNODE first, int iNo)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->rchild = NULL;
    newn->lchild = NULL;

    if ((*first) == NULL)
    {
        (*first) = newn;
    }
    else
    {
        temp = (*first);

        while (1)
        {
            if (iNo > temp->data)
            {
                if (temp->rchild == NULL)
                {
                    temp->rchild = newn;
                    break;
                }
                temp = temp->rchild; // if not equql the go forward to right
            }
            else if (iNo < temp->data)
            {
                if (temp->lchild == NULL)
                {
                    temp->lchild = newn;
                    break;
                }

                temp = temp->lchild; // ** if not equal then we have to move forsward
            }
            else if (iNo == temp->data)
            {
                printf("Unable to Insert Element as duplicate");
                free(newn);
                break;
            }
        }
    }
}

int Count(PNODE first)
{
    static int iCnt = 0;

    if (first != NULL)
    {
        iCnt++;
        Count(first->lchild);
        Count(first->rchild);
    }

    return iCnt;
}

bool Search(PNODE first, int iNo)
{
    bool bFlag = false;

    while (first != NULL)
    {
        if (iNo == first->data)
        {
            bFlag = true;
            break;  // if elemet find
        }
        else if (iNo > first->data)
        {
            first = first->rchild;
        }
        else if (iNo < first->data)
        {
            first = first->lchild;
        }
    }

    return bFlag;
}

int CountLeaf(PNODE first)
{
    static int iCnt = 0;

    if(first != NULL)
    {
        if((first->lchild == NULL) && (first->rchild == NULL))
        {
            iCnt++;
        }

        CountLeaf(first->lchild);   // No need that function is returning
        CountLeaf(first->rchild);   
    }

    return iCnt;
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    Insert(&head, 11);
    Insert(&head, 5);
    Insert(&head, 17);
    Insert(&head, 21);
    Insert(&head, 4);
    Insert(&head, 7);
    Insert(&head, 15);

    printf("Inorder Display : \n");
    Inorder(head);

    iRet = Count(head);
    printf("Number of nodes are : %d\n", iRet);


    if(Search(head,25) == true)
    {
        printf("25 is present in BST\n");
    }
    else
    {
        printf("25 is not present in BST\n");
    }

    iRet = CountLeaf(head);
    printf("Number of leaf Nodes are : %d\n",iRet);
    
    return 0;
}
