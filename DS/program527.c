#include<stdio.h>

int factorial(int iNo)
{
    int Mult = 1;

    while(iNo != 1)
    {
        Mult = Mult * iNo;
        iNo--;
    }

    return Mult;
}

int main()
{
    int iValue  = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet  = factorial(iValue);

    printf("Summation is : %d\n",iRet);

    return 0;
}   