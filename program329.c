#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    // Largest value of int 
    UINT iMask = 0xFFFFFFFF;
    printf("%u\t%x\n",iMask,iMask);

    return 0;
}