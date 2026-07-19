#include<stdio.h>


void Display(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d ",iDigit);
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue  = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    Display(iValue);

    printf("End of main");
    return 0;
}   