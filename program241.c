#include<stdio.h>

int main()
{

    char Arr[50] = {'\0'};

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);                 // Regular Expression Rejects             

    printf("Entered string is : \n%s\n",Arr);           

    return 0;

}   