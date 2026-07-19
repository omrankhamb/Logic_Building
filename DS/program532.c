#include<stdio.h>


void Display(int iNo)
{
    static int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d ",iDigit);
        printf("%d ",iDigit);
        iNo = iNo /10;
        Display(iNo);
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