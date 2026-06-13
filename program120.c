#include<stdio.h>
#include<stdlib.h>

int main()
{
   int *Brr = NULL;  //run time accidents
   int iLength = 0,iCnt = 0;

   // Step 1 : accepet the number of element
   printf("Enter Numner  of Elements : ");
   scanf("%d",&iLength);

   // Step 2 : Allocate The Memory
   Brr = (int*)malloc(iLength * sizeof(int));   //store in heap return (void*) cpnvert
   
   // Step 3 : Accepet the values from user
   printf("Enter the elements : \n");
   for(iCnt = 0 ; iCnt < iLength ; iCnt++)
   {
      scanf("%d",&Brr[iCnt]);
   }

   //step 4 : use the Memory(LOGIC)
   printf("Elements you entered : \n");
   for(iCnt = 0 ; iCnt < iLength ; iCnt++)
   {
      printf("%d\n",(*(Brr+iCnt)));
   }

   //Step 5 : deallocate the Memory
   free(Brr);

   
   return 0;
}