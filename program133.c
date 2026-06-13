#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//Time Complexity O(N) 
bool LinearSearch(int Arr[],int iSize,int iNo)
{
   int iCnt = 0;

   for(iCnt = 0 ; iCnt < iSize ; iCnt++)
   {
      if(Arr[iCnt]  == iNo)
      {
         break;
      }
   }

   if(iCnt == iSize)
   {
      return false;
   }
   return true;
}

int main()
{
   int *Brr = NULL;
   int iValue = 0;
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

   printf("Enter the element that you want to search :\n");
   scanf("%d",&iValue);

   bRet = LinearSearch(Brr,iLength,iValue);

   if(bRet == true)
   {
      printf("Element Present\n");
   }
   else{
      printf("Element Not present\n");
   }

   free(Brr);

   return  0;
}