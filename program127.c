#include<stdio.h>
#include<stdlib.h>

int CountFrequency(int Arr[],int iSize)
{
   int iCnt = 0;
   int iCount = 0;
   
   for(iCnt = 0 ; iCnt < iSize ; iCnt++)
   {
      if(Arr[iCnt]  == 11)
      {
         iCount++;
      }
   }

   return iCount;
}

int main()
{
   int *Brr = NULL;
   int iLength = 0,iCnt = 0 ,iRet = 0;

   printf("Enter the number of elements : ");
   scanf("%d",&iLength);

   Brr = (int*)malloc(sizeof(int) * iLength);

   printf("Enter the elements : \n");

   for(iCnt = 0 ; iCnt < iLength ; iCnt++)
   {
      scanf("%d",&(*(Brr + iCnt)));
   }

   iRet = CountFrequency(Brr,iLength);
   printf("Count of : %d",iRet);


   free(Brr);

   return 0;
}