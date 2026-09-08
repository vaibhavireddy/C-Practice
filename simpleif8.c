//WAP to check for pass or fail
#include <stdio.h>
int main()
{
  int marks;
  printf("enter marks:");
  scanf("%d",&marks);
  if(marks<35)
  {
  printf("fail");
  }
  if(marks>=35)
  {
  printf("pass");
  }
  return 0;
  }
