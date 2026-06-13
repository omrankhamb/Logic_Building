#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


// return problrm
bool LinearSearch(int Arr[],int iSize)
{
   int iCnt = 0;
   bool Present  = false;

   for(iCnt = 0 ; iCnt < iSize ; iCnt++)
   {
      if(Arr[iCnt]  == 11)
      {
         return true;   // Bad programming
         
      }
   }

   return false;
}

int main()
{
   int *Brr = NULL;
   int iLength = 0,iCnt = 0 ;
   bool bRet = false;

   printf("Enter the number of elements : ");
   scanf("%d",&iLength);

   Brr = (int*)malloc(sizeof(int) * iLength);

   printf("Enter the elements : \n");

   for(iCnt = 0 ; iCnt < iLength ; iCnt++)
   {
      scanf("%d",&(*(Brr + iCnt)));
   }

   bRet = LinearSearch(Brr,iLength);

   if(bRet == true)
   {
      printf("Element Present\n");
   }
   else{
      printf("Element Not present\n");
   }

   free(Brr);

   return 0;
}