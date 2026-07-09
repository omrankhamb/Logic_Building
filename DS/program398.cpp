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

class SinglyLL
{
    public :
        PNODE first;

        SinglyLL()
        {
            this->first = NULL;
            cout<<"Inside sonstructor"<<endl;
        }

        

};
int main()
{
    
    SinglyLL sobj;
    return 0;
}