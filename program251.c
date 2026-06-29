#include<stdio.h>
#include<stdio.h>

int Count(const char * str)  // error
{
    int iCount = 0;
    while (*str != '\0')
    {
        if((*str) == 'a' || (*str) == 'A')
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

    iRet = Count(Arr);                           // Passing Base Address
    printf("Frequency of Count \"a\" is : %d\n",iRet);

    return 0;

}   