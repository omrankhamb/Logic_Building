#include<stdio.h>

void strrevX(char *str)
{
    char *start = NULL;
    char *end = NULL;
    char temp = '\0';

    start = str;    // Strring Start

    while (*str != '\0')
    {
        str++;

    }
    str--;

    end = str;      // Storing End

    while (start <= end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
    
}


int main()
{

char Arr[50] = {'\0'};

printf("Enter String : ");
scanf("%[^'\n']s",Arr);

strrevX(Arr);
printf("Updated String : %s",Arr);



return 0;
}
