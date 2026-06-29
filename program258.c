#include<stdio.h>

void Update(char * str) 
{
    while (*str != '\0')
    {
        if((*str)  == 'l' )
        {
            *str = '-';
        }
        str++;
    }

}

int main()
{

    char Arr[50] = {'\0'};

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);                 // Regular Expression Rejects             

    Update(Arr);                           // Passing Base Address
        printf("After function call :\n%s",Arr);

    return 0;
}   