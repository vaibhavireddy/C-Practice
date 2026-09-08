//WAP to print squares (while loop)
#include <stdio.h>
int main()
{
   int i,limit;
   i=1;
  printf("Enter limit:");
  scanf("%d",&limit);
  while(i<=limit)
  {
  printf("square of %d is %d\n",i,i * i);
  i=i+1;
  }
  return 0;
  }
  
