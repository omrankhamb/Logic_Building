#include<stdio.h>

typedef unsigned int UINT;

// position 3 & 8
int main()
{
    UINT iMask1 = 0x00000080;
    UINT iMask2 = 0x00000004;
    UINT iMask  = 0x00000000;
    UINT iNo = 0;
    UINT iResult = 0;

    printf("ENter Number : \n");

    scanf("%d",&iNo);
    iMask = iMask1 | iMask2;

    iResult = iNo ^ iMask;

    printf("Updated number : %d\n",iResult);

    return 0;
}