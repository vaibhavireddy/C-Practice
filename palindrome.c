//WAP to check whether the given number is a palindrome
#include <stdio.h>
int main()
{
  int x,rev,y,rem;
  printf("Enter a number:");
  
  scanf("%d",&x);
  rev=0;
  y=x;
  while(x>0)
  {
    
    rem=x%10;
    rev=(rev * 10)+rem;
    x=x/10;
    }
   if(y==rev)
     printf("%d is a palindrome number",y);
    else
     printf("%d is not a palindrome number",y);
   return 0;
   }
