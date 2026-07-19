#include<stdio.h>


int Summation(int iNo)
{
    int iDigit = 0;
    static int iSum = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum += iDigit;
        iNo = iNo / 10;
        Summation(iNo);
    }

    return iSum;
}

int main()
{
    int iValue  = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = Summation(iValue);

    printf("Summation is : %d\n",iRet);
    printf("\nEnd of main");
    return 0;
}   