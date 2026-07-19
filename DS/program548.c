#include<stdio.h>

int CountCapital(char *str)
{
    static int Count = 0;

    if(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            Count++;
        }
        str++;
        CountCapital(str);
    }

    return Count;
}

int main()
{
    char Arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountCapital(Arr);
    printf("String of length is :%d ",iRet);

    return 0;
}   