#include <stdio.h>
#include <string.h>

int main()
{
    int iRet = 0;
    int i = 0, j = 0, k = 0;

    printf("enter 3 Numbers : \n");
    iRet = scanf("%d %d %d",&i,&j,&k);

    printf("Value of iRet is : %d",iRet);
    return 0;
}