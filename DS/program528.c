#include<stdio.h>

unsigned long int Factorial(int iNo)
{
    unsigned long int iMult = 1;

    while(iNo != 0)
    {
        iMult = iMult * iNo;
        iNo--;
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