// Input :  5
// Output : -5  -3   -1
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0 ;
    for(iCnt = -iNo; iCnt <= 0 ; iCnt +=2)   //shorthand operator
    {
        printf("%d\t\a",iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    printf("ENter Number : ");

    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}