#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo,UINT ipos)
{
    UINT iMask = 0x1;
    UINT iResult = 0;

    if(ipos < 1 || ipos > 32)
    
    {
        printf("Invalid bit manupulation\n");
        return iNo;
    }

    iMask = iMask << (ipos -1);

    iMask  = ~iMask;

    iResult = iNo & iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0, iRet = 0, iLocation = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    printf("Enter the bit position : \n");
    scanf("%d",&iLocation);

    iRet = OffBit(iValue,iLocation);

    
    printf("Updated number : %d\n",iRet);
    
    return 0;
}