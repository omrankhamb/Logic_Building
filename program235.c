#include<stdio.h>
#include<string.h>


int main()
{
    char str[] = "Jay Ganesh";
    int iRet = 0;
    
    iRet = strlen(str);         // Function
    printf("Length of String is : %d\n",iRet);

    iRet = sizeof(str);         // Operator
    printf("Size of String : %d",iRet);

    
    return 0;
}