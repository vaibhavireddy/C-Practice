//WAP to check for vote eligible or not eligible
#include <stdio.h>
int main()
{ 
   int age;
   printf("enter age:");
   scanf("%d",&age);
   if(age<18)
   {
    printf("not eligible");
    }
    if(age>=18)
    {
    printf("eligible");
    }
    return 0;
    }
