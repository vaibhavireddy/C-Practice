//WAP to read and display 3 students info using array of structures
#include <stdio.h>
struct student
{
  char name[20];
  int rollno;
  float cgpa;
  };
  
  int main()
  {
  struct student s[3];
  for(int i=0;i<3;i++)
  {
    printf("enter student %d details:\n",i+1);
    printf("Enter student name:");
    scanf("%s",s[i].name);
    printf("Enter student roll no:");
    scanf("%d",&s[i].rollno);
    printf("Enter student cgpa:");
    scanf("%f",&s[i].cgpa);
    }
   //display
   for(int i=0;i<3;i++)
   {
     printf("student %d details are:\n",i+1);
     printf("student name=%s\n",s[i].name);
     printf("Student roll no=%d\n",s[i].rollno);
     printf("student cgpa=%.2f\n\n",s[i].cgpa);
     }
     return 0;
     }
