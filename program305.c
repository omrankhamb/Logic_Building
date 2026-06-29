#include<stdio.h>


int main()
{
    int No1 = 0,No2 = 0 ,Ans = 0;

    printf("Enter First Number : \n");
    scanf("%d",&No1);

    printf("Enter Second Number : \n");
    scanf("%d",&No2);

    // Bitwise AND
    Ans = No1 & No2;
    printf("AND : %d\n",Ans);

    // Bitwise OR 
    Ans = No1 |No2;
    printf("OR : %d\n",Ans);

    // Bitwise XOR
    Ans = No1 ^ No2;
    printf("XOR : %d\n",Ans);
    return 0;
}
