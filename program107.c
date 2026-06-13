#include<stdio.h>

void Display(int iptr[])
{
   printf("%d\n",(*iptr));
   iptr++;
   printf("%d\n",*(iptr));
   iptr++;
   printf("%d\n",(*iptr));
   iptr++;
   printf("%d\n",*(iptr));
   iptr++;
   printf("%d\n",(*iptr));
   iptr++;

   
}

int main()  
{
   int Arr[5] = {10,20,30,40,50};

   Display(Arr);

   return 0;
}