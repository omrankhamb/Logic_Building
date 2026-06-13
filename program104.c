#include<stdio.h>

void Display(int *iptr)
{
   printf("Value if iPtr : %d \n",iptr);
   
}

int main()  
{
   int Arr[5] = {10,20,30,40,50};

   printf("Base Address of Arr : %d\n",Arr);
   Display(Arr);

   return 0;
}