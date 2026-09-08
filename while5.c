//WAP to print cubes (while loop)
#include <stdio.h>
int main()
{
  int i,limit;
  i=1;
  printf("Enter limit:");
  scanf("%d",&limit);
  while(i<=limit)
  {
    printf("cube of %d is %d\n",i,i * i * i);
    i++;
    }
    return 0;
    }
