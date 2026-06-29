#include<stdio.h>

int CountSmall(const char * str) 
{
    int iCount = 0;
    while (*str != '\0')
    {
        if( (*str) >= 'a' && (*str) <= 'z' )
        {
            iCount++;
        }
        str++;
    }

    return iCount;
}

int main()
{

    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);                 // Regular Expression Rejects             

    iRet = CountSmall(Arr);                           // Passing Base Address
    printf("Frequency of Count \"a\" is : %d\n",iRet);

    return 0;
}   