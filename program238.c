#include<stdio.h>

int main()
{
    char *str = "Ganesh";       // char str[] = "Ganesh";

    int iCount = 0;

    while (*str != '\0')        // *str = *(100 + 0) where 100 is base address of str
    {
        
        str++;
        iCount++;
    }

    printf("Length of strinf is : %d",iCount);
    return 0;
}