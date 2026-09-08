//WAP to print zero or positive or negative
#include <stdio.h>
int main()
{ 
   int a;
   printf("Enter number:");
   scanf("%d",&a);
   if(a==0)
   { 
     printf("zero");
     }
     if(a>0)
     {
       printf("positive");
       }
       if(a<0)
       {
         printf("negative");
         }
         return 0;
         }
