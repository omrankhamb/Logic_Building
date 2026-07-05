#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    // Smallest value of int 
    UINT iMask = 0x00000000;
    printf("%d\t%x\n",iMask,iMask);

    return 0;
}