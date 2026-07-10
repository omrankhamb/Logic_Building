#include<iostream>
#pragma pack(1)
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;

class SinglyCL
{

    private :
        PNODE first;
        PNODE last;
        int iCount;

    public :
        SinglyCL();

};

SinglyCL :: SinglyCL()
{
    this->first = NULL;
    this->last = NULL;
    this->iCount = 0;
}

int main()
{

    SinglyCL sobj;

    return 0;

}

