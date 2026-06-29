#include<stdio.h>

void Display(char *str)
{
    printf("Input String is :%s\n",str);
    
    

}

int main()
{

    char Arr[50] = {'\0'};

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);                 // Regular Expression Rejects             

    Display(Arr);                           // Passing Base Address

    return 0;

}   