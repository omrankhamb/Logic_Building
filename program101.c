#include<stdio.h>


int main()
{
   int Arr[5] = {0};
  
   int iCnt = 0;
   
   printf("Enter The Elements :\n");
   
   for(iCnt = 0 ; iCnt < 5 ; iCnt++)
   {
   scanf("%d",&Arr[iCnt]);
   }

   printf("Elements Of arrray are :\n");
   for(iCnt = 0 ; iCnt < 5 ; iCnt++)
   {
      printf("%d\n",Arr[iCnt]);
   }
   

   return 0;
}