#include<stdio.h>

int CountSpace(const char * str)    // passsed string should be constant 
{
    int iCount = 0;
    while (*str != '\0')
    {
        if( (*str)  == ' ' )
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

    iRet = CountSpace(Arr);                           // Passing Base Address
    printf("Frequency of Count \"a\" is : %d\n",iRet);

    return 0;
}   