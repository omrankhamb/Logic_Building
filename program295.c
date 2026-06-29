#include<stdio.h>

void strrevX(char str[])
{
    char *start = NULL;
    char *end = NULL;

    start =str ;        // Storing the starting point


    while (*str != '\0')
    {
        str++;
    }
    str--;
    while (start <= str)    // Getting the starting point
    {
        printf("%s\n",str);
        str--;
    }
    printf("\n");
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    strrevX(Arr);
    return 0;
}