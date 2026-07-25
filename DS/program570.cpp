#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *lchild;
    node *rchild;

    node(int data);
};

node ::node(int data)
{
    this->data = data;
    this->rchild = NULL;
    this->lchild = NULL;
}

class Tree
{
public:
    node *first;
    int iCnt;

public:
    Tree();

    void Inorder();
    int Count();
    void PreOrder(node *);
    void PostOrder(node *);

    void Insert(int);
    bool Search(int iNo);
    int LeafNode();
    int ParetnNode();

private :
    void InorderHelper(node *);
};

void Tree :: Inorder()
{
    InorderHelper(this->first);
    cout<<"\n";
}

void Tree ::InorderHelper(node *temp)
{
    if (temp != NULL)
    {
        InorderHelper(temp->lchild);
        cout << temp->data << " ";
        InorderHelper(temp->rchild);
    }
}

void Tree ::PreOrder(node *temp)
{
    if (temp != NULL)
    {
        cout << temp->data << " ";
        PreOrder(temp->lchild);
        PreOrder(temp->rchild);
    }
}

void Tree ::PostOrder(node *temp)
{
    if (temp != NULL)
    {
        PostOrder(temp->lchild);
        PostOrder(temp->rchild);
        cout << temp->data << " ";
    }
}

Tree ::Tree()
{
    this->first = NULL;
    this->iCnt = 0;
}

void Tree ::Insert(int iNo)
{
    node *newn = NULL;
    node *temp = NULL;

    newn = new node(iNo);

    if (this->first == NULL)
    {
        this->first = newn;
    }
    else
    {
        temp = this->first;

        while (1)
        {
            if (iNo > temp->data)
            {
                if (temp->rchild == NULL)
                {
                    temp->rchild = newn;
                    break;
                }
                temp = temp->rchild;
            }
            else if (iNo < temp->data)
            {
                if (temp->lchild == NULL)
                {
                    temp->lchild = newn;
                    break;
                }
                temp = temp->lchild;
            }
            else if (iNo == temp->data)
            {
                cout << "Node is already Present\n";
                return;
            }
        }
    }

    this->iCnt++;
}

int Tree ::Count()
{
    return this->iCnt;
}

bool Tree ::Search(int iNo)
{
    bool bFlag = false;
    node *temp = NULL;
    temp = this->first;

    while (temp != NULL)
    {
        if (temp->data == iNo)
        {
            bFlag = true;
            break;
        }
        else if (iNo < temp->data)
        {
            temp = temp->lchild;
        }
        else if (iNo > temp->data)
        {
            temp = temp->rchild;
        }
    }

    return bFlag;
}

int main()
{
    Tree obj;

    obj.Insert(11);
    obj.Insert(5);
    obj.Insert(17);
    obj.Insert(21);
    obj.Insert(4);
    obj.Insert(7);
    obj.Insert(15);

    cout <<"Number of Element Present in : "<<obj.Count()<<endl;

    obj.Inorder();
    cout<<endl;

    if(obj.Search(5))
    {
        cout<<"Element is Present\n";
    }
    else
    {
        cout<<"element is not present\n";
    }




    return 0;
}