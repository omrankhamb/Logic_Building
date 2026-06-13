// Input :  5
// Output : 5   4   3   2   1
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0 ;
    for(iCnt = iNo; iCnt >=1 ; iCnt--)   //shorthand operator
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