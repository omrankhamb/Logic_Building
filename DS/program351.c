#include<stdio.h>

struct node
{
    int data;
    struct node *next;    
};

int main()
{
    struct node obj;

    printf("%d\n",sizeof(obj));             // 16
    // 4(int) + 4(Padding) + 8(pointer)
    // If warninng use %lu
            
    return 0;
}