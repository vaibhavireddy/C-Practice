//wap to store marks of 5 students using loop and array
#include <stdio.h>
int main()
{
  float marks[5];
  for(int i=0;i<=4;i++)
  {
   printf("enter marks:\n");
   scanf("%f",&marks[i]);
   }
   printf("marks:\n");
   for(int i=0;i<=4;i++)
   {
   printf("%.2f\n",marks[i]);
   }
   return 0;
   }
