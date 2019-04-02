// C program to check if two numbers are equal  

#include<stdio.h>

int main()
{
    int x,y;
   scanf("%d",&x);
   scanf("%d",&y);

   if ( (x ^ y) )
      printf(" x is equal to y \n");
   else
      printf(" x is not equal to y \n");
   return 0;
}
