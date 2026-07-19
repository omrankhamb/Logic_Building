#include<stdio.h>


void Display(int iNo)
{
    int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        Display(iNo);
        printf("%d ",iDigit);
    }
}

int main()
{
    int iValue  = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    Display(iValue);

    printf("\nEnd of main");
    return 0;
}   