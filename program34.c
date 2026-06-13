#include<stdio.h>

void Display(int iNo)
{   
    //filter
    if(iNo < 0){
        printf("Invalid input");
        return;
    }


    int iCnt = 0;
    //reverse
    for(iCnt = iNo ; iCnt >=0 ; iCnt--)
    {
       printf("%d\n",iCnt);
    }

}
int main()
{
    int iValue = 0;   
    

    printf("Enter The Frequency : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}