// Input = 5
// Output = 1 2 3 4 5 
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0 ;
    for(iCnt = 1; iCnt <= 5  ; iCnt++)
    {
        printf("%d\t\a",iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    printf("ENter Number");

    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}