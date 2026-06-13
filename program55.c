// Input :  5
// Output : 1   2   3   4
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0 ;
    for(iCnt = 1; iCnt <iNo  ; iCnt = iCnt +1)  
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