#include<stdio.h>
#include<stdbool.h>

bool CheckEvenOdd(int iNo)
{
  
    if ( (iNo%2) == 0){
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    int iValue = 0;
    bool bRet = false;  //default value

    printf("Enter Number to check wheeher it is even or odd : ");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);
    if(bRet == true){
        printf("\n%d is Even \n",iValue);
    }
    else{
        printf("%d  is odd\n ",iValue);
    }

    
    return 0;
}