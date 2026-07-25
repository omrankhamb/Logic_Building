#include <iostream>
using namespace std;

template<class T>
class node
{
public:
    int data;
    node<T> *lchild;
    node<T> *rchild;

    node(int data);
};

template<class T>
node<T> ::node(int data)
{
    this->data = data;
    this->rchild = NULL;
    this->lchild = NULL;
}

template<class T>
class Tree
{
public:
    node<T> *first;
    int iCnt;

public:
    Tree();

    void Inorder();
    int Count();
    void PreOrder(node<T> *);
    void PostOrder(node<T> *);

    void Insert(int);
    bool Search(int iNo);
    int LeafNode();
    int ParetnNode();

private :
    void InorderHelper(node<T> *);
};

template<class T>
void Tree<T> :: Inorder()
{
    InorderHelper(this->first);
    cout<<"\n";
}

template<class T>
void Tree<T> ::InorderHelper(node<T> *temp)
{
    if (temp != NULL)
    {
        InorderHelper(temp->lchild);
        cout << temp->data << " ";
        InorderHelper(temp->rchild);
    }
}

template<class T>
void Tree<T> ::PreOrder(node<T> *temp)
{
    if (temp != NULL)
    {
        cout << temp->data << " ";
        PreOrder(temp->lchild);
        PreOrder(temp->rchild);
    }
}

template<class T>
void Tree<T> ::PostOrder(node<T> *temp)
{
    if (temp != NULL)
    {
        PostOrder(temp->lchild);
        PostOrder(temp->rchild);
        cout << temp->data << " ";
    }
}

template<class T>
Tree<T> ::Tree()
{
    this->first = NULL;
    this->iCnt = 0;
}

template<class T>
void Tree<T> ::Insert(int iNo)
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

template<class T>
int Tree<T> ::Count()
{
    return this->iCnt;
}

template<class T>
bool Tree<T> ::Search(int iNo)
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
    Tree<int> obj;

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