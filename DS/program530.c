#include<stdio.h>
typedef unsigned long int ULONG;
ULONG Factorial(int iNo)
{
    static ULONG iMult = 1;

    if(iNo != 0)
    {
        iMult = iMult * iNo;
        Factorial(iNo - 1);
    }

    return iMult;
}

int main()
{
    int iValue  = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet  = Factorial(iValue);

    printf("Summation is : %d\n",iRet);

    return 0;
}   