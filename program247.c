#include<stdio.h>

void strlenX(char str[])
{
    *str = 'A';
}

int main()
{

    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);                 // Regular Expression Rejects             

    strlenX(Arr);                           // Passing Base Address
    printf("string is : %s\n",Arr);

    return 0;

}   