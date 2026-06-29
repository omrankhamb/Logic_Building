#include<stdio.h>

void Display(char str[])
{
    printf("%c\n",str[0]);
    printf("%c\n",str[1]);
    printf("%c\n",str[2]);
}

int main()
{

    char Arr[50] = {'\0'};

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);                 // Regular Expression Rejects             

    Display(Arr);                           // Passing Base Address

    return 0;

}   