#include<stdio.h>

void Display(int iNo)
{
    auto  i = 1;

    while( i <= iNo)
    {
        printf("Jay Ganesh \n");
        i++;
    }   
}

int main()
{
    int iValue = 0;

    printf("enter Frequency : ");
    scanf(" %d",&iValue);
    
    Display(iValue);
    return 0;
}