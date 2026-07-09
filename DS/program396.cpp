#include<iostream>
#pragma pack(1)
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;



int main()
{
    NODE obj;
    cout<<sizeof(obj)<<endl;    // 12
    return 0;
}