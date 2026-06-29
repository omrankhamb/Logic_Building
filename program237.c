#include<stdio.h>

int main()
{
    char *str = "Ganesh";       // char str[] = "Ganesh";

    while (*str != '\0')        // *str = *(100 + 0) where 100 is base address of str
    {
    
    printf("%c",*str);
    str++;

    }
    return 0;
}