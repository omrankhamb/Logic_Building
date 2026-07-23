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

// LL D R
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
                temp = temp->rchild;    // if not equql the go forward to right
            }
            else if (iNo < temp->data)
            {
                if (temp->lchild == NULL)
                {
                    temp->lchild = newn;
                    break;
                }

                temp = temp->lchild;    // ** if not equal then we have to move forsward 
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

int main()
{
    PNODE head = NULL;

    Insert(&head, 11);
    Insert(&head, 5);
    Insert(&head, 17);

    printf("Inorder Display : \n");
    Inorder(head);

    printf("Preorder Display : \n");
    Preorder(head);

    printf("PostOrder Display : \n");
    PostOrder(head);
    return 0;
}