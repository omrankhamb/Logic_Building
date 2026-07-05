#include<stdio.h>

typedef unsigned int UNINT;

int main()
{
    UNINT iNo = 0;
    UNINT iMask = 0x1;
    UNINT iAns = 0;
    UNINT ipos = 0;

    printf("Enter Number : \n");
    scanf("%d",&iNo);

    printf("Enter the position : \n");
    scanf("%d",&ipos);

    iMask = iMask << (ipos -1 );

    iAns = iNo & iMask;

    if(iAns == iMask)
    {
        printf("Bit is ON \n");
    }   
    else
    {
        printf("Bit is OFF\n");
    }
    return 0;
}