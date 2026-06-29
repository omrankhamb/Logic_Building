#include<stdio.h>
#include<string.h>

int main()
{
    char *str = "Ganesh";       // char str[] = "Ganesh";

    int iCount = 0;

    printf("Length of string is : %d\n",strlen(str));
    while (*str != '\0')        // *str = *(100 + 0) where 100 is base address of str
    {
        
        str++;
        iCount++;
    }

    printf("Length of strinf is : %d\n",iCount);
    
    return 0;
}