//WAP to print reverse of a given number
#include <stdio.h>
int main()
{
  int rem,rev,x;
  printf("Enter a number:");
  scanf("%d",&x);
  rev=0;
  while(x>0)
  {
   rem=x%10;
   rev=(rev * 10)+rem;
   x=x/10;
   }
  printf("Reverse=%d",rev);
  return 0;
  }
  
   
