//WAP to read and display employee info using structures
#include <stdio.h>
struct employee
{
  char name[30];
  int empid;
  char designation[50];
  int salary;
  int mobileno;
  };
  int main()
  {
    struct employee e;
    scanf("%s",e.name);
    scanf("%d",&e.empid);
    scanf("%s",e.designation);
    scanf("%d",&e.salary);
    scanf("%d",&e.mobileno);
    //display
    printf("Employee name=%s\n",e.name);
    printf("Employee id=%d\n",e.empid);
    printf("Employee designation=%s\n",e.designation);
    printf("Employee salary=%d\n",e.salary);
     printf("Employee mobile no=%d\n",e.mobileno);
    return 0;
    }
    
