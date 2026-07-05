#include<stdio.h>

typedef unsigned int UINT;

// Position : 4

UINT OffBit(UINT iNo,UINT iPos)
{
    UINT iMask = 0xFFFFFFF7;
    UINT iResult = 0;

    if(iPos < 1 || iPos > 32)
    {
        printf("Invalid bit position");
        return 0;
    }
    iMask = iMask << (iPos - 1);

    iResult = iNo ^ iMask;

    return iResult;
}
int main()
{
    UINT iValue = 0, iRet = 0 , iLocation = 0;

    printf("Enter Number : ");
    scanf("%d",&iLocation);

    printf("Enter The bit position : \n");
    scanf("%d",&iLocation);

    iRet = OffBit(iValue,iLocation);

    printf("Updated number is : %d \n",iRet);
    
    return 0;
}