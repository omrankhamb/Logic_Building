#include<stdio.h>
#include<stdlib.h>



int Summation(int Arr[],int iSize)
{
   int iSum = 0;
   int iCnt = 0;   
   for(iCnt = 0 ; iCnt < iSize ; iCnt++)
   {
      iSum = iSum + Arr[iCnt];
   }

   return iSum;

}


int main()
{
   int *Brr = NULL;  //run time accidents
   int iLength = 0,iCnt = 0;
   int iRet = 0;


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
   iRet = Summation(Brr,iLength);
   printf("Summation is : %d\n",iRet);

   
   //Step 5 : deallocate the Memory
   free(Brr);

   
   return 0;
}