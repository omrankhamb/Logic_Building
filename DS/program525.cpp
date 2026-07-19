#include<stdio.h>


int Summation(int iNo)
{
    static int iSum = 0;

    if(iNo != 0)
    {
        iSum = iSum + iNo;
        Summation(--iNo);
    }

    return iSum;
}

int main()
{
    int iValue  = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet  = Summation(iValue);

    printf("Summation is : %d\n",iRet);

    return 0;
}   