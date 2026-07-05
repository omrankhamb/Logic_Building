#include<stdio.h>

typedef unsigned int UNIT;

int main()
{
    UNIT iNo = 0;
    UNIT iMask = 4;
    UNIT iAns  = 0;

    printf("Enter Number : \n");
    scanf("%d",&iNo);

    iAns = iAns & iMask;

    if(iAns == iMask)
    {
        printf("3rd bit is ON\n");
    }else
    {
        printf("3rd bit is OFF\n");
    }
    
    return 0;
}
