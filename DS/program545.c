#include<stdio.h>

int strlenx(char *str)
{
    int iCount = 0;

    while(*str != 0)
    {
        str++;
        iCount++;
    }

    return iCount;
}

int main()
{
    char Arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = strlenx(Arr);
    printf("String of length is :%d ",iRet);

    return 0;
}   