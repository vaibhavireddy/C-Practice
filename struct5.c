//WAP to read and display 5 employee info using array of structures
#include <stdio.h>
struct employee
{
 char name[20];
 int empid;
 char designation[50];
 int salary;
 };
 int main()
 {
   struct employee e[5];
   for(int i=0;i<5;i++)
   {
      printf("Enter employee %d details:\n",i+1);
      printf("Enter employee name:");
      scanf(" %[^\n]",e[i].name);
      printf("Enter employee id:");
      scanf("%d",&e[i].empid);
      printf("Enter employee designation:");
      scanf(" %[^\n]",e[i].designation);
      printf("enter employee salary:");
      scanf("%d",&e[i].salary);
      }
      //display
      for(int i=0;i<5;i++)
      {
        printf("details of employee %d are:\n",i+1);
        printf("employee name=%s\n",e[i].name);
        printf("employee id=%d\n",e[i].empid);
        printf("employee designation=%s\n",e[i].designation);
        printf("employee salary=%d\n\n",e[i].salary);
        }
        return 0;
        }
        
      
