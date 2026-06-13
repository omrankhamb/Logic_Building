#include<stdio.h>

int Summation(int Arr[],int iSize)
{
   int iCnt = 0;
   int iSum = 0;
   for(iCnt = 0 ; iCnt < iSize ; iCnt++)
   {
      iSum = iSum + Arr[iCnt];
   }

   return iSum;
}

int main()  
{
   int iLength = 4;
   int Brr[iLength]; 
   int iRet = 0;  
   
   int iCnt = 0;

   printf("Enter elements of array : \n");
   for(iCnt = 0 ; iCnt < 4 ; iCnt++)
   {
      scanf("%d",&Brr[iCnt]);
   }
   

   iRet = Summation(Brr,iLength);
   printf("Addition of all elements : %d \n",iRet);

   return 0;
}