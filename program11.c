/*
    START
        Accepet number as No
        If No is Complrtley divisible by 2
            by print even 
        Otherwise 
            print odd
    STOP

    START 
        Accepet number as No
        Divide No by 2
        If remainder is 0
            then print as Even 
        otherwise 
            print as Odd
    STOP
*/
#include<stdio.h>



int main()
{
    int iValue = 0;
    int iRemainder = 0;



    printf("Enter Number  : \n");
    scanf("%d",&iValue);

    iRemainder = iValue % 2;
    if(iRemainder == 0)
    {
        printf("Number is Even\n");
    }
    else{
        printf("Number is add\n");
    }
    
    return 0;
}