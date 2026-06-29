#include<stdio.h>

int strlenX( char * const str)  // error
{
    int iCount = 0;

    while (*str != '\0')
    {
        iCount++,str++;
    }

    return iCount;
}

int main()
{

    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);                 // Regular Expression Rejects             

    iRet = strlenX(Arr);                           // Passing Base Address
    printf("Length of string is : %d\n",iRet);

    return 0;

}   